#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Book {
    char title[100];
    int total_page;
    int read;
};

typedef struct __Book Book;

void write_books_to_text(const char* filename, Book** books, int count) {
    FILE *file = fopen(filename, "w"); 
    if (!file) {
        perror("Cannot open file to write");
        return;
    }

    fprintf(file, "%d\n", count); 

    for (int i = 0; i < count; ++i) {
        fprintf(file, "%s,%d,%d\n", books[i]->title, books[i]->total_page, books[i]->read);
    }

    fclose(file);
}

Book** read_books_from_text(const char* filename, int* count) {
    FILE *file = fopen(filename, "r"); 
    if (!file) {
        perror("Cannot open file to read");
        return NULL;
    }

    fscanf(file, "%d\n", count); 
    Book** books = (Book**) malloc(*count * sizeof(Book*));

    for (int i = 0; i < *count; ++i) {
        books[i] = (Book*) malloc(sizeof(Book));
        fscanf(file, "%99[^,],%d,%d\n", 
            books[i]->title, &books[i]->total_page, &books[i]->read);
    }

    fclose(file);
    return books;
}

int main() {
    int size;
    Book** readBooks = read_books_from_text("books.txt", &size);
    for (int i = 0; i < size; ++i) {
        printf("Title: %s\n", readBooks[i]->title);
        printf(" Read: %d/%d\n", readBooks[i]->read, readBooks[i]->total_page);
        printf("------\n");
    }
    
    for (int i = 0; i < size; ++i) {
        free(readBooks[i]);
    }
    free(readBooks);
    return 0;
}
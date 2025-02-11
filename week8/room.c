#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Person {
    char firstname[100];
    char lastname[100];
};

typedef struct __Person Person; // how typedef use with struct it use to write shorter

struct __Book {
    char title[100];
    Person authour; //call struct
    int total_page;
    int read;
};

typedef struct __Book Book;

typedef double kg;


void printBook(Book book);
char *fullname(Person person);
void readmore(Book *book, int page);
Book *createBook(char* title, char* firstname, char* lastname, int total_page);

void printBook(Book book){
    printf("----------------------\n");
    printf("Title: %s\n", book.title);
    printf("   By: %s\n", book.authour.firstname);
    printf(" read: %d/%d\n", book.read, book.total_page);
    printf("----------------------\n");
}

char *fullname(Person person){
    char *result = (char*) malloc(201);
    sprintf(result, "%s %s", person.firstname, person.lastname);
    return result;
}

void readmore(Book *book, int page){
    if(page > 0) {
        if (book -> read + page <= book -> total_page){  // if you need to access to pointer in struct you need to use " -> " this call arrow
            book -> read += page;
            //(*book).read += page; [so this can use too but if you don't use "()" program will do " . " first]
        } else {
            book -> read = book -> total_page;
        }
    }
}

Book *createBook(char* title, char* firstname, char* lastname, int total_page){
    Book *result = (Book*) malloc(sizeof(Book));
    strcpy(result -> title, title);
    strcpy(result -> authour.firstname, firstname);
    strcpy(result -> authour.lastname, lastname);
    result -> total_page = total_page;
    result -> read = 0;
    return result;
}

int main() {
    kg weight = 15.4;

    Book cppBook;

    cppBook.total_page = 184; //how to access member in struct use "."
    //cppBook.title = "Introduction to C++";
    strcpy(cppBook.title, "Introduction to C++");
    strcpy(cppBook.authour.firstname, "Tep");
    strcpy(cppBook.authour.lastname, "C++");
    cppBook.read = 15;

    readmore(&cppBook, 30);

    printBook(cppBook);

    Book javaBook = {"Book of Java", {"A", "B"}, 250, 41}; //use initializer 
    printBook(javaBook);

    Book shelf[3];
    strcpy(shelf[0].title, "Book 1 in shelf");
    shelf[0].total_page = 200;
    shelf[0].read = 0;

    Book *books[10];

    books[0] = &cppBook;
    books[1] = &javaBook;
    books[2] = & shelf[0];
    books[3] = createBook("Naruto vol.1", "...", "...", 100);

    for (int i = 0; i < 4; i++){
        printBook(*(books[i]));
    }

    return 0;
}

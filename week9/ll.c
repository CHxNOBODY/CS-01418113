#include <stdio.h>
#include <stdlib.h>

struct __Node {
    int data;
    struct __Node *next;
};

typedef struct __Node Node;
typedef Node* List;

void insert(List *list, int value);
void insertFirst(List* list, int value);
void delete(List* list, int value);
void print(List list);
void printWhile(List list);

int main() {
    List head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 15);
    print(head);
    printWhile(head);
    insert(&head, 88);
    print(head);
    insertFirst(&head, 50);
    print(head); //50->10->20->15->88->
    insert(&head, 90);
    print(head);
    insert(&head, 100);
    print(head);
    delete(head, 100);
    return 0;
}

void delete(List* list, int value) {
    if (*list == NULL) return;

    Node* current = *list;
    Node* prev = NULL;

    while (current != NULL) {
        if (current -> data == value) break;
        prev = current;
        current = current -> next;
    }

    // NOT FOUND
    if (current == NULL) {
        return;
    }

    // FOUND
    if (prev == NULL) {
        // found at root node, need to delete root node
        *list = current -> next;
        free(current);
        return;
    }

    // found at non-root node
    prev -> next = current -> next;
    free(current);
}

void insertFirst(List* list, int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node -> data = value;
    node -> next = NULL;

    if (*list == NULL) {
        *list = node;
        return;
    }

    node -> next = *list;
    *list = node;
}


void insert(List* list, int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node -> data = value;
    node -> next = NULL;

    if (*list == NULL) {
        *list = node;
        return;
    }
    
    Node* current = *list;
    Node* prev = NULL;

    while(current != NULL) {
        prev = current;
        current = current -> next;
    }

    prev -> next = node;
}

void print(List list) { //Recersive
    if (list == NULL) {
        return;
    }
    printf("%d->", list -> data);
    print(list -> next);
}

void printWhile(List list){ 
    if (list == NULL){
        printf("\n");
        return;
    }
    Node* current = list;
    while (current != NULL){
        printf("%d->", current -> data);
        current = current -> next;
    }
    printf("\n");
    //Every node is pointer.
}
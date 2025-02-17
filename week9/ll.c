#include <stdio.h>
#include <stdlib.h>

struct __Node {
    int data;
    struct __Node *next;
};

typedef struct __Node Node;
typedef Node* List;

void insert(List *list, int value);
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

    return 0;
}

void insert(List* list, int value){
    Node* node = (Node*) malloc(sizeof(Node));
    node -> data = value;
    node -> next = NULL;

    if (*list == NULL){
        *list = node;
        return;
    }
    
    Node* current = *list;
    Node* prev = NULL;

    while(current != NULL){
        prev = current;
        current = current -> next;
    }

    prev -> next = node;
}

void print(List list){ //Recersive
    if (list == NULL){
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
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} node;

void insertNode(node **pList, int value) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;

    if (*pList == NULL || (*pList)->value > value) {
        newNode->next = *pList;
        *pList = newNode;
        return;
    }

    node *current = *pList;
    while (current->next != NULL && current->next->value < value) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void printList(node *pList) {
    while (pList != NULL) {
        printf("%d ", pList->value);
        pList = pList->next;
    }
    printf("\n");
}

int main() {
    int i, value;
    node *pList = NULL; 
    for (i = 0; i < 10; i++) {
        scanf("%d", &value);
        insertNode(&pList, value);
    }

    printList(pList);

    return 0;
}

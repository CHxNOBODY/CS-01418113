#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock) {
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n", stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return;
    }
    
    int nTypes, amount;
    double price;
    char line[100], date[10], time[10], name[30];
    
    fscanf(file, "%d", &nTypes);
    Product stock[100];
    int nStock = 0;
    
    while (fscanf(file, "%[^,],%[^,],%[^,],%d,%lf\n", date, time, name, &amount, &price) == 5) {
        int found = 0;
        for (int i = 0; i < nStock; i++) {
            if (strcmp(stock[i].name, name) == 0) {
                stock[i].amount += amount;
                stock[i].totalCost += price;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(stock[nStock].name, name);
            stock[nStock].amount = amount;
            stock[nStock].totalCost = price;
            nStock++;
        }
    }
    fclose(file);
    
    printStock(stock, nStock);
}

int main() {
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
    return 0;
}

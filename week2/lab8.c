#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    const double fixedcost = 5.0;
    const double basecost = 2.0;
    const double pepperoni_cost = 0.5;
    const double cheese_cost = 0.25;
    const double mushroom_cost = 0.3;

    char input[10];
    int size = 0, pepperoni = 0, cheese = 0, mushroom = 0;
    double diameter = 0.0, area, extracost = 0.0, cost, price;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(input, 10, stdin);
    size = atoi(input);

    if (size == 1) {
        diameter = 10.0;
    } else if (size == 2) {
        diameter = 16.0;
    } else if (size == 3) {
        diameter = 20.0;
    } else {
        printf("Invalid size selected!\n");
        return 1;
    }

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(input, sizeof(input), stdin);
    pepperoni = atoi(input);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(input, sizeof(input), stdin);
    cheese = atoi(input);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(input, sizeof(input), stdin);
    mushroom = atoi(input);

    //area = M_PI * pow(diameter / 2.0, 2);

    if (pepperoni == 1) extracost += pepperoni_cost;
    if (cheese == 1) extracost += cheese_cost;
    if (mushroom == 1) extracost += mushroom_cost;

    cost = fixedcost + (basecost * area) + (extracost * area);
    price = 1.5 * cost;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.\n");

    return 0;
}

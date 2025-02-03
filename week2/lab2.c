#include <stdio.h>
#include <stdlib.h>

int main(){
    char input_sticker[10], input_price[10];
    int sticker, sticker_remain;
    double price, discount = 0.0, total;

    fgets(input_sticker, 10, stdin);
    sticker = atoi(input_sticker);

    fgets(input_price, 10, stdin);
    price = atof(input_price);

    if (sticker >= 9) {
        discount = 40.0;
        sticker_remain = sticker - 9;
    }
    else if (sticker >= 6) {
        discount = 30.0;
        sticker_remain = sticker - 6;
    }
    else if (sticker >= 3) {
        discount = 20.0;
        sticker_remain = sticker - 3;
    }
    else if (sticker == 2) {
        discount = 15.0;
        sticker_remain = sticker - 2;
    }
    else if (sticker == 1){
        discount = 10.0;
        sticker_remain = sticker - 1;
    }
    else {
        discount = 0.0;
        sticker_remain = sticker;
    }

    total = price * (1 - discount / 100);

    printf("You get %.0f percents discount.\n", discount);
    printf("Total amount due is %.2f Baht.\n", total);
    printf("And you have %d stickers left.\n", sticker_remain);

    return 0;
}

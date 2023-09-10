#include <stdio.h>
#include <stdbool.h>

float calculateDiscount(int shoppingAmount) {
    const float firstDiscount = 10;
    const float secondDiscount = 20;
    const float thirdDiscount = 30;

    if (shoppingAmount >= 1000000) {
        return shoppingAmount - (shoppingAmount*thirdDiscount/100);
    }

    if (shoppingAmount >= 550000) {
        return shoppingAmount - (shoppingAmount*secondDiscount/100);
    }

    if (shoppingAmount >= 200000) {
        return shoppingAmount - (shoppingAmount*firstDiscount/100);
    }

    return shoppingAmount;
}


int main() {
    float totalAmount;
    int shopingCountInAMonth;
    float resultAmount;
    char c;
    float totalDiscount;

    do
    {
        float shoppingAmount;
        printf("Masukan total belanja dan tekan enter: ");
        scanf("%f", &shoppingAmount);

        totalAmount += shoppingAmount;
        shopingCountInAMonth++;

        printf("Apakah ingin belanja lagi? (Y/n) ");
        scanf(" %c",&c);

    } while (c == 'Y' || c == 'y');

    resultAmount = calculateDiscount(totalAmount);
    if (shopingCountInAMonth >= 4) {
        totalDiscount = resultAmount*20/100;
        resultAmount = resultAmount - totalDiscount;
    }

    printf("Total harga (sebelum discount): %.2f\n", totalAmount);
    printf("Total Discount: %.2f\n", totalDiscount);
    printf("Harga yang harus dibayarkan: %.2f\n", resultAmount);
    return 0;
}

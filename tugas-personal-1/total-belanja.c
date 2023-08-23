#include <stdio.h>

int main() {
    float totalAmount;
    int shopingCountInAMonth;
    float resultAmount;

    const float firstDiscount = 10;
    const float secondDiscount = 20;
    const float thirdDiscount = 30;

    printf("Masukan total belanja dan tekan enter: \n");
    scanf("%f", &totalAmount);

    printf("Masukan total transaksi pembelian dalam sebulan dan tekan enter: \n");
    scanf("%d", &shopingCountInAMonth);

    if (totalAmount >= 1000000) {
        resultAmount = totalAmount - (totalAmount*thirdDiscount/100);
    } else if (totalAmount >= 550000) {
        resultAmount = totalAmount - (totalAmount*secondDiscount/100);
    } else if (totalAmount >= 200000) {
        resultAmount = totalAmount - (totalAmount*firstDiscount/100);
    } else {
        resultAmount = totalAmount;
    }

    if (shopingCountInAMonth == 4) {
        resultAmount = resultAmount - (resultAmount*20/100);
    }

    printf("Harga yang harus dibayarkan: %.2f\n", resultAmount);
    return 0;
}

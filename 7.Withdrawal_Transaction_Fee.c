#include <stdio.h>

int main() {
    float amount, netAmount;

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if (amount < 500)
        netAmount = amount - 10;
    else
        netAmount = amount;

    printf("Net amount received: %.2f\n", netAmount);
    return 0;
}

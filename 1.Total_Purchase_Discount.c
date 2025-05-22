#include <stdio.h>

int main() {
    float amount, finalAmount;
    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    if (amount > 1000)
        finalAmount = amount - (amount * 0.10);
    else
        finalAmount = amount;

    printf("Final amount: %.2f\n", finalAmount);
    return 0;
}


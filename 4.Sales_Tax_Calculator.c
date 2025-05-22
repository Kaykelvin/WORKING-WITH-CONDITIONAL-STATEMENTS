#include <stdio.h>

int main() {
    float amount, taxRate, total;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    taxRate = (amount < 500) ? 0.05 : 0.08;
    total = amount + (amount * taxRate);

    printf("Total payable amount: %.2f\n", total);
    return 0;
}


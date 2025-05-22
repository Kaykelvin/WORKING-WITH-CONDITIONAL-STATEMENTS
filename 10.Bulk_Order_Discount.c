#include <stdio.h>

int main() {
    int quantity;
    float pricePerUnit, total;

    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter price per unit: ");
    scanf("%f", &pricePerUnit);

    total = pricePerUnit * quantity;

    if (quantity >= 10)
        total -= total * 0.15;

    printf("Total cost: %.2f\n", total);
    return 0;
}

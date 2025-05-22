#include <stdio.h>

int main() {
    float cost, selling;

    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter selling price: ");
    scanf("%f", &selling);

    if (selling > cost)
        printf("Profit: %.2f\n", selling - cost);
    else if (cost > selling)
        printf("Loss: %.2f\n", cost - selling);
    else
        printf("No profit, no loss.\n");

    return 0;
}

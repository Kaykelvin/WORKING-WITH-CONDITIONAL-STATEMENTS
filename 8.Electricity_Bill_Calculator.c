#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 200)
        bill = units * 0.50;
    else
        bill = units * 0.75;

    printf("Total bill: %.2f\n", bill);
    return 0;
}

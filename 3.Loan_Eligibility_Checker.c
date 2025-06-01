#include <stdio.h>

int main() {
    float salary;
    int years;

    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter years of employment: ");
    scanf("%d", &years);

    if (salary >= 5000 || years >= 2)
        printf("Eligible for loan.\n");
    else
        printf("Not eligible for loan.\n");

    return 0;
}

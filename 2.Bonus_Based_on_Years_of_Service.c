#include <stdio.h>

int main() {
    int years;
    float salary, finalSalary;

    printf("Enter years of service: ");
    scanf("%d", &years);
    printf("Enter basic salary: ");
    scanf("%f", &salary);

    if (years > 5)
        finalSalary = salary + (salary * 0.05);
    else
        finalSalary = salary;

    printf("Final salary: %.2f\n", finalSalary);
    return 0;
}

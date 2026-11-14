#include <stdio.h>

int main() {
    float gross, allowance = 0, deduction = 0, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowance = gross * 10 / 100;
        deduction = gross * 3 / 100;
    }
    if (gross > 5000 && gross <= 10000) {
        allowance = gross * 7 / 100;
        deduction = gross * 2 / 100;
    }

    net = gross + allowance - deduction;
    printf("Allowance  = %.2f\n", allowance);
    printf("Deduction  = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", net);
    return 0;
}

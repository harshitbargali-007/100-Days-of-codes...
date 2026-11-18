#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Sum: %.2lf\n", a + b);
    printf("Difference: %.2lf\n", a - b);
    printf("Product: %.2lf\n", a * b);
    if (b != 0)
        printf("Quotient: %.2lf\n", a / b);
    else
        printf("Quotient: Division by zero error\n");
    return 0;
}

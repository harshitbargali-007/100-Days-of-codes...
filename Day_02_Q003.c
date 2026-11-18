#include <stdio.h>

int main() {
    double l, b;
    scanf("%lf %lf", &l, &b);
    printf("Area: %.2lf\n", l * b);
    printf("Perimeter: %.2lf\n", 2 * (l + b));
    return 0;
}

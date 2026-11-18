#include <stdio.h>
#define PI 3.141592653589793

int main() {
    double r;
    scanf("%lf", &r);
    printf("Area: %.2lf\n", PI * r * r);
    printf("Circumference: %.2lf\n", 2 * PI * r);
    return 0;
}

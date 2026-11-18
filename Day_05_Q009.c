#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    scanf("%lf %lf %lf", &p, &r, &t);
    double si = (p * r * t) / 100.0;
    double ci = p * pow((1.0 + r / 100.0), t) - p;
    printf("Simple Interest: %.2lf\n", si);
    printf("Compound Interest: %.2lf\n", ci);
    return 0;
}

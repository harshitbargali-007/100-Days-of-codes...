#include <stdio.h>
#include <math.h>

int main() {
    int n, orig, digits = 0;
    double sum = 0;
    scanf("%d", &n);
    orig = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    if (n == 0) digits = 1;
    temp = n;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    if ((int)round(sum) == orig) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}

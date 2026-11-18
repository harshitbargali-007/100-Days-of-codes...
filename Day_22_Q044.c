#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    if (n >= 1) sum += 1.0;
    for (int i = 2; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }
    printf("Sum: %.4lf\n", sum);
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    long long prod = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
        prod *= i;
    if (n < 2) prod = 0;
    printf("Product: %lld\n", prod);
    return 0;
}

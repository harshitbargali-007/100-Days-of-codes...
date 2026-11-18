#include <stdio.h>

int main() {
    int n, prod = 1, hasOdd = 0;
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {
            prod *= d;
            hasOdd = 1;
        }
        n /= 10;
    }
    printf("Product of odd digits: %d\n", hasOdd ? prod : 0);
    return 0;
}

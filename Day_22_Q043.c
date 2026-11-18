#include <stdio.h>

int main() {
    int n, orig, sum = 0;
    scanf("%d", &n);
    orig = n;
    while (n > 0) {
        int d = n % 10, f = 1;
        for (int i = 1; i <= d; i++) f *= i;
        sum += f;
        n /= 10;
    }
    if (sum == orig && orig > 0) printf("Strong Number\n");
    else printf("Not Strong Number\n");
    return 0;
}

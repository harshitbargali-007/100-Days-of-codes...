#include <stdio.h>

int main() {
    int n;
    long long bin = 0, place = 1;
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        bin += (n % 2) * place;
        n /= 2;
        place *= 10;
    }
    printf("%lld\n", bin);
    return 0;
}

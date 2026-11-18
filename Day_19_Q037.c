#include <stdio.h>

int main() {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    printf("LCM: %d\n", (a * b) / x);
    return 0;
}

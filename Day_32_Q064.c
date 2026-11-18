#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    scanf("%lld", &n);
    if (n < 0) n = -n;
    if (n == 0) freq[0] = 1;
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) maxDigit = i;
    }
    printf("Most frequent digit: %d\n", maxDigit);
    return 0;
}

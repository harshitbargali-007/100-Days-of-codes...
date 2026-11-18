#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long expected = (long long)n * (n + 1) / 2, actual = 0;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        actual += val;
    }
    printf("%lld\n", expected - actual);
    return 0;
}

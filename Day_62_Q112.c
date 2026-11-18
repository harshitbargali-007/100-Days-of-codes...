#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    long long maxSoFar = arr[0], curr = arr[0];
    for (int i = 1; i < n; i++) {
        curr = (arr[i] > curr + arr[i]) ? arr[i] : curr + arr[i];
        if (curr > maxSoFar) maxSoFar = curr;
    }
    printf("%lld\n", maxSoFar);
    return 0;
}

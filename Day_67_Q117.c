#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    int b[n], res[m + n];
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];
    for (int x = 0; x < m + n; x++) printf("%d ", res[x]);
    printf("\n");
    return 0;
}

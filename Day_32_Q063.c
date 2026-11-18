#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    int b[n2], m[n1 + n2];
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n1; i++) m[i] = a[i];
    for (int i = 0; i < n2; i++) m[n1 + i] = b[i];
    for (int i = 0; i < n1 + n2; i++) printf("%d ", m[i]);
    printf("\n");
    return 0;
}

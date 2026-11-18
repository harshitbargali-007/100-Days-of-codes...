#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    int dq[n], front = 0, rear = -1;
    for (int i = 0; i < n; i++) {
        if (front <= rear && dq[front] <= i - k) front++;
        while (front <= rear && arr[dq[rear]] <= arr[i]) rear--;
        dq[++rear] = i;
        if (i >= k - 1) printf("%d ", arr[dq[front]]);
    }
    printf("\n");
    return 0;
}

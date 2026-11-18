#include <stdio.h>

int findBound(int nums[], int n, int target, int isFirst) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) {
            ans = mid;
            if (isFirst) r = mid - 1;
            else l = mid + 1;
        } else if (nums[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return ans;
}

int main() {
    int n, target;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &target);
    int first = findBound(nums, n, target, 1);
    int last = findBound(nums, n, target, 0);
    printf("%d, %d\n", first, last);
    return 0;
}

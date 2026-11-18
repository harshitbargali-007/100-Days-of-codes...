#include <stdio.h>

int main() {
    int total_seconds, h, m, s;
    scanf("%d", &total_seconds);
    h = total_seconds / 3600;
    m = (total_seconds % 3600) / 60;
    s = total_seconds % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) {
        printf("numbers.txt not found\n");
        return 1;
    }
    int num, count = 0;
    long long sum = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    printf("Sum: %lld, Average: %.2lf\n", sum, count ? (double)sum / count : 0.0);
    return 0;
}

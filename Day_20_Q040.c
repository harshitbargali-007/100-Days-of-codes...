#include <stdio.h>

int main() {
    long long bin, comp = 0, place = 1;
    scanf("%lld", &bin);
    if (bin == 0) {
        printf("1\n");
        return 0;
    }
    while (bin > 0) {
        int bit = bin % 10;
        comp += (bit == 0 ? 1 : 0) * place;
        bin /= 10;
        place *= 10;
    }
    printf("%lld\n", comp);
    return 0;
}

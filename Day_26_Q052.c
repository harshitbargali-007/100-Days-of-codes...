#include <stdio.h>

int main() {
    int counts[] = {1, 3, 5, 3, 1};
    for (int b = 0; b < 5; b++) {
        for (int i = 0; i < counts[b]; i++) {
            printf("*\n");
        }
        if (b < 4) printf("\n");
    }
    return 0;
}

#include <stdio.h>

enum Example { A = 5, B = 15, C = 25 };

int main() {
    enum Example x = B;
    printf("Integer value of B: %d\n", x);
    return 0;
}

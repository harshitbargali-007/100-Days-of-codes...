#include <stdio.h>

enum Choice { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b;
    scanf("%d %d %d", &choice, &a, &b);
    switch ((enum Choice)choice) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
        default: printf("Invalid Choice\n");
    }
    return 0;
}

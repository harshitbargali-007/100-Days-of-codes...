#include <stdio.h>

int main() {
    char str[1000];
    int seen[26] = {0};
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a']) {
                printf("First repeating lowercase: %c\n", str[i]);
                return 0;
            }
            seen[str[i] - 'a'] = 1;
        }
    }
    printf("None\n");
    return 0;
}

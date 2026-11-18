#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            printf("%.*s\n", len, str + i);
        }
    }
    return 0;
}

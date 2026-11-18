#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') spaces++;
        else if (isdigit(str[i])) digits++;
        else if (!isalpha(str[i])) special++;
    }
    printf("Spaces: %d, Digits: %d, Special: %d\n", spaces, digits, special);
    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);
    for (int i = 0; name[i] != '\0'; i++) {
        if ((i == 0 || name[i - 1] == ' ') && isalpha(name[i])) {
            printf("%c.", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}

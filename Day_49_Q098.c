#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    char *lastSpace = strrchr(name, ' ');
    if (lastSpace == NULL) {
        printf("%s\n", name);
        return 0;
    }
    for (char *p = name; p < lastSpace; p++) {
        if ((p == name || *(p - 1) == ' ') && isalpha(*p)) {
            printf("%c. ", toupper(*p));
        }
    }
    printf("%s\n", lastSpace + 1);
    return 0;
}

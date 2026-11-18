#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000] = "";
    fgets(str, sizeof(str), stdin);
    char *tok = strtok(str, " \t\n");
    while (tok != NULL) {
        if (strlen(tok) > strlen(longest)) strcpy(longest, tok);
        tok = strtok(NULL, " \t\n");
    }
    printf("Longest word: %s\n", longest);
    return 0;
}

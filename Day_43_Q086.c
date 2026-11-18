#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int l = 0, r = strlen(str) - 1, pal = 1;
    while (l < r) {
        if (str[l++] != str[r--]) { pal = 0; break; }
    }
    if (pal) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}

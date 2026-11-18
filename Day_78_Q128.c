#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("File not found\n");
        return 1;
    }
    int ch, vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        char c = tolower(ch);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}

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
    int ch, chars = 0, words = 0, lines = 0, inWord = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) inWord = 0;
        else if (!inWord) { inWord = 1; words++; }
    }
    if (chars > 0 && ch != '\n') lines++;
    fclose(fp);
    printf("Characters: %d, Words: %d, Lines: %d\n", chars, words, lines);
    return 0;
}

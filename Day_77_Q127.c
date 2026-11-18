#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    if (!fin) {
        printf("input.txt not found\n");
        return 1;
    }
    FILE *fout = fopen("output.txt", "w");
    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }
    fclose(fin);
    fclose(fout);
    printf("Converted to uppercase in output.txt\n");
    return 0;
}

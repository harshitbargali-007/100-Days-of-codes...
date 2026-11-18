#include <stdio.h>

int main() {
    char filename[100], text[500];
    scanf("%s", filename);
    getchar();
    fgets(text, sizeof(text), stdin);
    FILE *fp = fopen(filename, "a");
    if (!fp) {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Appended successfully\n");
    return 0;
}

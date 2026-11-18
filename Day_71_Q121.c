#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    if (!fp) {
        printf("Error opening file\n");
        return 1;
    }
    char name[100];
    int age;
    printf("Enter name and age: ");
    scanf("%s %d", name, &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data successfully saved to info.txt\n");
    return 0;
}

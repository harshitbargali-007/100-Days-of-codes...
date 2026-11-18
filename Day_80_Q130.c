#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    FILE *fp = fopen("students.txt", "w");
    char name[100];
    int roll;
    float marks;
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}

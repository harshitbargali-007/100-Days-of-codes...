#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n];
    int topIdx = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[topIdx].marks) topIdx = i;
    }
    printf("Top Student: %s (Roll: %d, Marks: %.2f)\n", s[topIdx].name, s[topIdx].roll_no, s[topIdx].marks);
    return 0;
}

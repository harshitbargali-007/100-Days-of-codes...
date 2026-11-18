#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;
    scanf("%s %d", p.name, &g);
    p.gender = (enum Gender)g;
    printf("Name: %s, Gender: ", p.name);
    if (p.gender == MALE) printf("Male\n");
    else if (p.gender == FEMALE) printf("Female\n");
    else printf("Other\n");
    return 0;
}

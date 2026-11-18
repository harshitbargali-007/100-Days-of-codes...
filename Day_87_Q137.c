#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    int r;
    scanf("%d", &r);
    switch ((enum Role)r) {
        case ADMIN: printf("Full administrative access granted.\n"); break;
        case USER: printf("Standard user access granted.\n"); break;
        case GUEST: printf("Read-only guest access granted.\n"); break;
        default: printf("Invalid role.\n");
    }
    return 0;
}

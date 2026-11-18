#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    int s;
    scanf("%d", &s);
    switch ((enum Status)s) {
        case SUCCESS: printf("Operation Succeeded\n"); break;
        case FAILURE: printf("Operation Failed\n"); break;
        case TIMEOUT: printf("Operation Timed Out\n"); break;
        default: printf("Unknown Status\n");
    }
    return 0;
}

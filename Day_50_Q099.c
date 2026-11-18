#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int d, m, y;
    const char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    scanf("%s", date);
    if (sscanf(date, "%d/%d/%d", &d, &m, &y) == 3 && m >= 1 && m <= 12) {
        printf("%02d-%s-%04d\n", d, months[m], y);
    } else {
        printf("Invalid date\n");
    }
    return 0;
}

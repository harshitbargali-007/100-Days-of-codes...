#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    int val;
    scanf("%d", &val);
    enum TrafficLight light = (enum TrafficLight)val;
    if (light == RED) printf("Stop\n");
    else if (light == YELLOW) printf("Wait\n");
    else if (light == GREEN) printf("Go\n");
    else printf("Invalid\n");
    return 0;
}

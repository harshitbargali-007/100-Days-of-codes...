#include <stdio.h>

int main() {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    if (sp > cp)
        printf("Profit Percentage: %.2lf%%\n", ((sp - cp) / cp) * 100.0);
    else if (cp > sp)
        printf("Loss Percentage: %.2lf%%\n", ((cp - sp) / cp) * 100.0);
    else
        printf("No Profit No Loss\n");
    return 0;
}

#include <stdio.h>
int main() {
    int days;
    scanf("%d", &days);

    int years = days / 365;
    int weeks = (days % 365) / 7;
    int rem = days - (years * 365) - (weeks * 7);

    printf("%d %d %d", years, weeks, rem);
    return 0;
}

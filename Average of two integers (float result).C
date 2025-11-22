#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    float avg = (a + b) / 2.0;
    printf("%.2f", avg);
    return 0;
}

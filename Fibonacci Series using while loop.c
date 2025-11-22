#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, c, i = 2;

    scanf("%d", &n);

    printf("%d %d ", a, b);

    while(i < n) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    }

    return 0;
}

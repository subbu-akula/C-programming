#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d up to %d rows:\n", n, n);

    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

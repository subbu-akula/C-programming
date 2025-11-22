#include <stdio.h>

int main() {
    int n, i = 1;
    long long fact = 1;

    scanf("%d", &n);

    while(i <= n) {
        fact *= i;
        i++;
    }

    printf("Factorial = %lld\n", fact);
    return 0;
}

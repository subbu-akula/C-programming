#include <stdio.h>

int main() {
    int n, i;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        if (i % 2 == 0)
            even_sum += i;
        else
            odd_sum += i;
    }

    printf("Sum of even numbers from 0 to %d = %d\n", n, even_sum);
    printf("Sum of odd numbers from 0 to %d = %d\n", n, odd_sum);

    return 0;
}

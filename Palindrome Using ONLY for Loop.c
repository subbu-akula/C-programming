#include <stdio.h>

int main() {
    int n, temp, rev = 0;

    scanf("%d", &n);

    temp = n;

    for(; temp > 0; temp = temp / 10) {
        rev = rev * 10 + (temp % 10);
    }

    
    (rev == n) ? printf("Palindrome\n") : printf("Not Palindrome\n");

    return 0;
}

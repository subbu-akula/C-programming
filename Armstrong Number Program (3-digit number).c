#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit; 
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}

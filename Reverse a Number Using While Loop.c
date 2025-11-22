#include <stdio.h>

int main() {
    int n, temp, rev = 0, digit;

    scanf("%d", &n);

    temp = n; 
    while(temp > 0) {
        digit = temp % 10;    
        rev = rev * 10 + digit; 
        temp /= 10;          
    }

    printf("Reversed Number = %d\n", rev);

    return 0;
}

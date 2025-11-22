#include <stdio.h>

int main() {
    int n, temp, rev = 0;

    scanf("%d", &n);

    temp = n;

  
    for(; temp > 0; temp = temp / 10) {
        rev = rev * 10 + (temp % 10);
    }

    printf("Reversed Number = %d\n", rev);

    return 0;
}

#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
        printf("Divisible by both 5 and 11\n");
    else
        printf("Not divisible by both 5 and 11\n");
    return 0;
}

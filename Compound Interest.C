#include <stdio.h>
int main() {
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    float a = p * (1 + r/100) * (1 + r/100); // only for 2 years
    printf("%.2f", a);
    return 0;
}

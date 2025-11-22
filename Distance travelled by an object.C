#include <stdio.h>
int main() {
    float u,t,a;
    scanf("%f%f%f",&u,&t,&a);
    printf("%.2f", u*t + 0.5*a*t*t);
    return 0;
}

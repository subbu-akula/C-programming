#include <stdio.h>
int main() {
    int h;
    scanf("%d", &h);

    int minutes = h * 60;
    int seconds = minutes * 60;

    printf("%d %d", minutes, seconds);
    return 0;
}

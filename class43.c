#include<stdio.h>

int main() {
    int x=5, y=0, z=x;
    x++, y++;
    printf("%d\n", x);
    printf("z = %d\n", z);
    ++x;
    x+=y;
    printf("%d\n", x);
    y%=(x+5);
    printf("%d\n", y);
    return 0;
}

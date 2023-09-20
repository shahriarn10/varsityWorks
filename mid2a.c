#include<stdio.h>

int main() {
    int x=10, y=5;
    ++x;
    printf("x=%d\n", x++);
    x+=y;
    printf("x=%d, y=%d\n", x, y--);
    y%=++x;
    printf("x=%d, y=%d\n", x, y);
    return 0;
}
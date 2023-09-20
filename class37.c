#include<stdio.h>

int main() {
    int x=10, y=5;
    x++, ++y;
    printf("x = %d y = %d\n", x++, y);
    y=y%(y + x++);
    printf("x = %d y = %d\n", x, y);
    ++x, y--;
    printf("x = %d y = %d\n", x+y, --y);    
    printf("x = %d y = %d\n", x, y);
    return 0;
}
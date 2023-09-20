#include<stdio.h>

int main() {
    int x=5, y=0;
    x++, y++;
    printf("%d\n", x);
    ++x;
    x+=y;
    printf("%d\n", x);
    return 0;
}

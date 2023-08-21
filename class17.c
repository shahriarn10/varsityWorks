#include<stdio.h>
int main() {
int a=10, b=20, x, y;
x=++a;
y=b++;
printf("x=%d, a=%d\n", x, a);
printf("y=%d, b=%d\n", y, b);
return 0;
}
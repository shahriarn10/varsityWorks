#include<stdio.h>
int main() {
int a, b, result; //a=-11,b=3
scanf("%d%d", &a, &b);
result=((a/b)*3+(a%b));
printf("The result is %d", result);
return 0;
}
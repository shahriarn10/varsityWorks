#include<stdio.h>

int main() {
    int a=5, b=10, c=1;
    printf("%d\n", a&b);    //and operator
    printf("%d\n", a|b);    //or operator
    printf("%d\n", a>>c);   //right swift operator
    printf("%d\n", a<<c);   //left swift operator
    printf("%d\n", a^b);    //xor operator
    return 0;
    }
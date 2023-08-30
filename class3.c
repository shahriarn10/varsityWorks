#include<stdio.h>

int main() {
    int a, b;
    printf("Please enter two number : ");
    scanf("%d %d", &a, &b);
    if(a>b) {
        printf("%d is greater than %d\n", a, b);
    }
    else if(a<b) {
        printf("%d is greater than %d\n", b, a);
    }
    else{
        printf("Both are equal\n");  //2 integer greater,or equal!
    }
    return 0;
}

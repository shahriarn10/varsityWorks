#include<stdio.h>

int main() {
    int ar[]={2,4,6,8,10,12};
    int cnt=0, i;
    for (i=0; ar[i]!='\0'; i++)
    cnt++;              //finding length/size of an array
    printf("%d is the length of the ar\n", cnt);
    return 0;
}
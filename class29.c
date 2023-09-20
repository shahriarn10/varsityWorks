#include<stdio.h>

int main() {
    int ar[]={2,4,6,8,10,12};
    int size_ar=sizeof(ar)/sizeof(ar[0]);       //finding length/size of an array using function
    printf("%d is the length of the ar\n", size_ar);
    return 0;
}
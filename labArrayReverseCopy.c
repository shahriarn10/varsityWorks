#include<stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int ar1[size], ar2[size];

    printf("input ar1: ");
    for(int i = 0; i < size; i++)    //input array
        scanf("%d", &ar1[i]);
    printf("ar2: ");
    for(int i = 0; i < size; i++) {   //input array
        ar2[i]=ar1[i];
    //  1   0  1  0
    //  3   1  3  1
    //  5   2  5  2

    //output array
        printf("%d ", ar2[i]);
}
return 0;
}

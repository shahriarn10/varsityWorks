#include<stdio.h>

int main() {
    int arr[]={53,32,19,5,79,47,6};
    int mx=arr[0], mn=arr[0], i;
    for(i=0; i<7; i++) {
        if(arr[i]>mx)
        mx=arr[i];
        if(arr[i]<mn)           
        mn=arr[i];
    }
    int mx2=arr[0], mn2=arr[0];
    for(i=0; i<7; i++) {
        if(arr[i]>mx2 && arr[i]<mx)
        mx2=arr[i];
        if(arr[i]<mn2 && arr[i]>mn)
        mn2=arr[i];
    }                                           //find  second maximum & second minimum from an array
    printf("Maximum = %d\nMinimum = %d\n", mx, mn);
    printf("Second Maximum = %d\nSecond Minimum = %d\n", mx2, mn2);
    return 0;
}
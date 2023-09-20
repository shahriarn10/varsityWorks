#include<stdio.h>

int main() {
    int arr[]={53,32,19,5,79,47,6};
    int mx=arr[0], mn=arr[0], i;
    for(i=0; i<7; i++) {
        if(arr[i]>mx)
        mx=arr[i];
        if(arr[i]<mn)           //find maximum & minimum from an array
        mn=arr[i];
    }
    printf("Maximum = %d\nMinimum = %d\n", mx, mn);
    return 0;
}
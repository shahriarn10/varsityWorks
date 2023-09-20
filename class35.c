#include<stdio.h>

int main() {
    int n, max;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        }                                 //find maximum from an array
        max=arr[0];
        for(int j=0; j<n; j++) {
            if(arr[j]>max) {
                max=arr[j];
            }
        }
    printf("Maximum is %d\n", max);
    return 0;
}
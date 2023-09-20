#include<stdio.h>

int main() {
    int n, min;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        }                                 //find minimum from an array
        min=arr[0];
        for(int j=0; j<n; j++) {
            if(arr[j]<min) {
                min=arr[j];
            }
        }
    printf("Minimum is %d\n", min);
    return 0;
}
#include<stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    printf("input array: ");
    for(int i = 0; i < size; i++) {  //input array

        scanf("%d", &arr[i]);
    }
    //output array
    printf("output array in reverse order: ");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}

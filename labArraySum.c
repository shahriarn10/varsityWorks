#include<stdio.h>

int main() {
    int size, sum=0;
    scanf("%d", &size);
    int arr[size];
    printf("input array: ");
    for(int i = 0; i < size; i++) {

        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("output sum: %d\n", sum);
    return 0;
}


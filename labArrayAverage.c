#include<stdio.h>

int main() {
    int size;
    float sum=0;
    scanf("%d", &size);
    int arr[size];
    printf("input array: ");
    for(int i = 0; i < size; i++) {

        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("output sum: %.2f\n", sum);
    float average= sum/size;
    printf("Average: %.2f\n", average);
    return 0;
}



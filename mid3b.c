#include <stdio.h>

int main() {
    int max;
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];

    for (int j = 1; j < 10; j++) {
        if (arr[j] > max) {
            max = arr[j];
        }
    }
    printf("%d\n", max);

return 0;
}

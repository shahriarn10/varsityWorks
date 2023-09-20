#include<stdio.h>

int main() {
    int ar[] =  {4, 5, 6, 3, 1, 2, 8, 10}, even=0, odd=0;
    for(int i=0; i<8; i++) {
        if(ar[i]%2==0) {
            even++;
            printf("%d is even\n",  ar[i]);
        }
        else {
            odd++;
            printf("%d is odd\n", ar[i]);
        }
    }
    printf("Total even = %d\nTotal odd = %d\n", even, odd);
return 0;
}
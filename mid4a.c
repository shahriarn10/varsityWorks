#include<stdio.h>

int main() {
    int first=0,second=1;
    while(second<5)
    {
        printf("%d\n",second);  //biggest mistake i made
        first=second;
        second += first;

    }
}

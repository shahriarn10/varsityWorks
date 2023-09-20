#include<stdio.h>

int main() {
    int n, i=1, y=2;
    scanf("%d", &n);
    while(i<=n) {
        int x=y+i;
        y=x;
        printf("%d ", y);
        i++;
    }
    return 0;
}
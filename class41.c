#include<stdio.h>

int main() {
    int n, i=1, y=2, z=0;
    scanf("%d", &n);
    while (i<=n) {
        int x=y;
        z=i;
        y=x-z;
        i++;
        printf("%d ", y);
    }
    return 0;
}

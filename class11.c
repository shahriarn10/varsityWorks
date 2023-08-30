#include<stdio.h>

int main() {
    int row, col;
    for(row=1; row<=5; row++) {
        for(col=1; col<=row; col++) {
            printf("%d", col);
        }
        printf("\n"); //print 1 to 5 in sequently
    }
    return 0;
}

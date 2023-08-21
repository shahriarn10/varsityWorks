#include<stdio.h>
int main() {
int a []={2,3,4,5,6};
int sum=0;
for(int i=0; i<5; i++) {
    sum += a[i];
}
printf("The sum is %d without loop\n", sum);
return 0;
}
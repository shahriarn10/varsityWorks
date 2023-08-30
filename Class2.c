#include<stdio.h>
//global scope
int main () {
//local scope
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
int sum = a + b + c;
printf("The sum is %d\n", sum);

float avg = sum/3;
printf("The average is %f\n", avg);  // 3 integer sum then average
return 0;
}

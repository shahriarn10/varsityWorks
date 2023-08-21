#include<stdio.h>
int main() {
int i, j, k, result; //i=5,j=15,k=7
scanf("%d%d%d", &i, &j, &k);
result=(((i%5)*3)+(j*2-k)+(k%5)*i);
printf("The result is %d", result);
return 0;
}
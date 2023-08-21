#include<stdio.h>

int main() {
    int marks;
    printf("Please enter your marks : ");
    scanf("%d", &marks);
    if(marks>=80 && marks<=100) {
        printf("A+");
    }
    else if("marks>=75 && marks<80") {
        printf("A");
    }
    else if("marks>=70 && marks<75") {
        printf("A-");
    }
    else if("marks>=65 && marks<70") {
        printf("B+");
    }
    else if("marks>=60 && marks<65") {
        printf("B");
    }
    else if("marks>=55 && marks<60") {
        printf("C");
    }
    else if("marks>=40 && marks<55") {
        printf("D");
    }
    else if("marks>=0 && marks<40") {
        printf("failed");
    }
    else
        printf("Enter a valid number"); {
    }
    return 0;
}
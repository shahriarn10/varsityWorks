#include<stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    char vowel[]= {'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0; i<10; i++) {
        if(ch==vowel[i]) {
            printf("%c is a vowel\n", ch);
            return 0;
        }
    }
    if((ch>'a'&&ch<='z')||(ch>'A'&&ch<='Z')) {
        printf("%c is a consonent\n", ch);
    }                       //check  vowel & consonent using array
    else {
        printf("%c is not an alphabet\n",  ch);
        return 0;
    }
}
#include<stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
        printf("%c is a vowel\n", ch);
    }
    else if ((ch>'a' && ch<='z')||(ch>'A' && ch<='Z'))
    {
        printf("%c is a consonent\n", ch);
    }
    else            //check  vowel & consonent
    {
        printf("%c is not a alphabet\n", ch);
    }
return 0;
}
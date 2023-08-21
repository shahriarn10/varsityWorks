#include<stdio.h>

char to_upper(char ch) {
if(ch>='a' && ch<='z')
    return ch - 32;
else if(ch>='A' && ch<='Z')
    return ch + 32;
}
int main() {
char ch;
printf("Enter a lower or upper case alphabet: ");
scanf("%c", &ch);
printf("The opposite case alphabet is %c \n", to_upper(ch));
return 0;
}
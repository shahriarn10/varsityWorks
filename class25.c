#include<stdio.h>

int main() {
    char letters[] = {'e', 'A',  'b', 'c', 'g', 'z'};
    int capital=0, small=0;
    for(int i=0; i<6; i++)  {
        if(letters[i]>='A' && letters[i]<='Z')
        capital++;
        else if(letters[i]>='a' && letters[i]<='z')
        small++;
    }
    printf("Total capital = %d\nTotal small = %d\n", capital, small);
return 0;
}
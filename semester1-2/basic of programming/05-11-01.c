#include <stdio.h>

int main(){
    char first[] = "hong gil dong";
    char second[] = " is a thief";
    int i = 0;

    while(first[i]!='\0')
    {
        printf("%c", first[i]);
        i++;
    }
    i = 0;
    while(second[i]!='\0')
    {
        printf("%c", second[i]);
        i++;
    }

}
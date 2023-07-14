#include <stdio.h>

int main(){
    char string1[81];
    char string2[81];

    gets(string1);
    gets(string2);

    if (string1 > string2)
    {
        printf("-1");
    }
    else
        printf("0");
}
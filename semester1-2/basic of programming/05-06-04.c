#include <stdio.h>

int main(){
    char string1[81] = "Program";
    char string2[81];
    int i = 0;
    while ( string1[i] != NULL)
    {
        string2[i] = string1[i];
        i++;
    }
    printf("%s", string2);
}
#include <stdio.h>

int main(){
    char string[81];
    gets(string);

    int i = 0;
    while (1)
    {
        if (string[i]==NULL)
        {
            break;
        }
        i++;
    }
    printf("%d", i);
}
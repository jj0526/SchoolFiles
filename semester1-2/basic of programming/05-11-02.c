#include <stdio.h>

int main(){
    char str[100];

    gets(str);
    int i = 0;
    while (str[i]!='\0') 
    /*while (str[i]!=0)
    while (str[i]!=NULL)
    while (str[i]!='\0')*/
    {
        if ((str[i]>=65)&&(str[i]<=90)){

            str[i] = str[i] + 32;

        }

        i++;

    }

    puts(str);

}
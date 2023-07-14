#include <stdio.h>

int main(){
    char string[100];
    gets(string);
    char vowel[100];

    int j = 0;

    for (int i = 0; i<strlen(string); i++){
    
        if (((int)string[i]==65)||((int)string[i]==69)||((int)string[i]==73)||((int)string[i]==79)||((int)string[i] == 85)||((int)string[i]==97)||((int)string[i]==101)||((int)string[i]==105)||((int)string[i]==111)||((int)string[i]==117))
        {
            vowel[j] = string[i];
            j++;
        }
    }
    for (int i = 0; i<j; i++){

        putchar(vowel[i]);

    }
    return 0;

}
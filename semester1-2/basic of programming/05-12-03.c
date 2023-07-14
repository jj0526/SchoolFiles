#include <stdio.h>

int main(){
    char message[81];
    char c;
    int i = 0;
    int k = 0;

    printf("string\n");

    while(1)
    {
        c = getchar();
        if( c== '\n' || i==80)
            break;
        message[i] = c;
        i++;
    }
    message[i] = '\0';

    puts(message);

    return 0;
}
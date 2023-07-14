#include <stdio.h>

int main(){
    char message [81];
    char c;
    int i, k;
    printf("enter a string:\n");
    i=0;
    while (1)
    {
        c = getchar();
        if (c=='\n' || i==80)
            break;
        message[i] = c; /* store string */
        i = i+1;
    }
    message[i] = '\0';
    puts(message);
}
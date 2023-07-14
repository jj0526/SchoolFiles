#include <stdio.h>

int main(){
    char c;
    printf("type something\n");
    scanf("%c", &c);

    switch (c)
    {
        case 'a':
        case 'A':
            printf("It's A");
            break;

        case 'b':
        case 'B':
            printf("It's B");
            break;

        default:
            break;
    }
    return 0;
}
#include <stdio.h>

int main(){
    char msg[100];
    char c;
    int i=0, k;

    printf("enter a string:\n");

    while(1){
        c = getchar();
        if (c=='\n' || i==99){
            break;
        }
        else{
            msg[i] = c;
            i = i+1;
        }
    }
    msg[i] = '\0';

    printf("%s", msg);

}
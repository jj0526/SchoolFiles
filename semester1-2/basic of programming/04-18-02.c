#include <stdio.h>

int main(){

    int N;
    
    printf("input a number\n");
    scanf("%d",&N);

    switch(N%2)
    {
        case 0:
            printf("even number");
            break;
        case 1:
            printf("odd number");
            break;
    }
    return 0;
}
#include <stdio.h>

int main(){
    int num;
    printf("num?");
    scanf("%d",&num);

    int n;

    n = num%2;

    switch(n)
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
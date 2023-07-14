#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    {
        int *b = (int *)malloc(sizeof(int));
        a=b;
    }
    *a = 13;
    free(a);

    printf("%d\n", *a);
    
    return 0;
}
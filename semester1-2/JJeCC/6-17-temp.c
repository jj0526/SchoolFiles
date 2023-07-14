#include <stdio.h>
#include <stdlib.h>

int main(){
    int *t = (int *)malloc(sizeof(int));
    int *q = (int *)malloc(sizeof(int));
    *t = 13;
    *q = 14;
    printf("t : %p *t : %d\nq : %p *q : %d\n",t, *t, q, *q);
    printf("t-1 : %p q-1 : %p\n", t-1, q-1);
    printf("*(t-1) : %d\n", *(t-1));
    return 0;
}
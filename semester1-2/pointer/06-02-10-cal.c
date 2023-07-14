#include <stdio.h>

int main(){
    int n1, n2, re1, re2, re3, re4;

    printf("input 2 numbers\n");
    scanf("%d %d", &n1, &n2);

    cal( &n1, &n2, &re1, &re2, &re3, &re4); // important

    printf("%d %d %d %d", re1, re2, re3, re4);

}
void cal(int *n1, int *n2, int *re1, int *re2, int *re3, int *re4){

    *re1 = *n1 * *n2;
    *re2 = *n1 / *n2;
    *re3 = *n1 % *n2;
    *re4 = *n1 + *n2;

}
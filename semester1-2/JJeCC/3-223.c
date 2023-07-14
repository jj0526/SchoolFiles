#include <stdio.h>
#include <stdlib.h>

int main(){

    /*int a[10];
    int *p = a;*/

    //*(p+3) == a[3]

    int n;
    int *b;

    scanf("%d", &n);
    b = malloc(sizeof(int)*n);

    printf("type the num");
    scanf("%d", &b[2]);            // = scanf("%d", b + 2);
    printf("%d",b[2]);

    free(b);

    // 2 ^ 20

}
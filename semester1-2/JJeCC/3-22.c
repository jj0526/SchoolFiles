#include<stdio.h>

int main(){

    int a = 13;
    int *p = &a;

    printf("%d",*p);

    int b;
    int *q = &b;
    printf("type the num");
    scanf("%d",&b);
    printf("%d\n", q );
    printf("%d", *q);
    
}
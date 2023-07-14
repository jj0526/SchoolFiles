#include <stdio.h>

int main(){
    int *p;
    int num = 12345;
    p = &num;
    printf("num is = %d\n", num);
    printf("num address is = %p\n", &num);
    printf("pointer value is = %p\n", p);
    printf("pointer indicates value %d\n", *p);
    *p = 23456;
    printf("num is = %d\n", num);
    printf("num address is = %p\n", &num);
    printf("pointer value is = %p\n", p);
    printf("pointer indicates value %d\n", *p);

}
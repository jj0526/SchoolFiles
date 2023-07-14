#include <stdio.h>
#define SIZE 4

void main() {
    int b[] = { 10, 20, 30,40 };
    int *bPtr = b;
    for (int i = 0; i < SIZE; i++)
    {
    printf("b[%d] = %d\n", i, b[i]);
    printf("*(b+%d) = %d\n", i, *(b+i));
    printf("bPtr[%d] = %d\n", i, bPtr[i]);
    printf("*(bPtr+%d) = %d\n", i, *(bPtr + i));
    }
}
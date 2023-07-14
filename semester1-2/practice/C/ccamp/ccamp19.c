#include <stdio.h>

void swap( int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int a = 1, b = 2;
    swap (&a,&b);
    printf("%d, %d",a,b);

}
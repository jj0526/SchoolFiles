#include <stdio.h>
#include <math.h>

int main(){

    int num;
    scanf("%d",&num);

    int arr[20];
    int poi;

    for (int i = 0; i<15; i++)
    {
        if ((pow(2,i)<=num)&& (num < pow(2,i+1)))
        {
            poi = i+1;
        }
    }

    for (int i = 0; i<poi; i++)
    {
        arr[i] = num%2;
        num = num/2;
    }

    for (int i = poi-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;

}
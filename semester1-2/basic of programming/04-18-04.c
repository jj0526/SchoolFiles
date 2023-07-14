#include <stdio.h>

int main(){
    int sum = 0;
    int i = 1;
    while ( i <=100)
    {
        if (i%5==0)
        {
            sum +=i;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}
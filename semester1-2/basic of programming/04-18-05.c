#include <stdio.h>

int main(){
    
    int array[10];
    int num;
    int small;
    int big;
    int avr = 0;

    printf("how many integers?");
    scanf("%d",&num);

    for (int i = 0; i<num; i++ )
    {
        scanf("%d", &array[i]);
        if (array[i]<0)
        {
            printf("type the input again");
            return 0;
        }
    }
    small = array[0];
    big = array[0];
    for (int i = 0; i<num; i++)
    {
        if (small>array[i])
        {
            small = array[i];
        }
    }
    for (int i = 0; i<num; i++)
    {
        if (big < array[i])
        {
            big = array[i];
        }
    }
    for (int i = 0; i<num; i++)
    {
        avr = avr + array[i];
    }
    avr = avr / num;
    printf("the biggest num : %d, the smallest num : %d, the average : %d",big,small,avr);
    return 0;
}
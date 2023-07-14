#include <stdio.h>

int main(){
    printf("input 7 temperatures.");
    float t[10];
    float average = 0;
    float below[10];

    for (int i = 0; i<7; i++)
    {
        scanf("%f",&t[i]);
    }

    for (int i = 0; i<7; i++)
    {
        average = average + t[i];
    }

    average = average/7;

    printf("average : %.2f\n", average);

    for (int i = 0; i<7; i++)
    {
    
        if (average > t[i])
        {
            printf("%.2f\n",t[i]);
        }
    }
    return 0;
}
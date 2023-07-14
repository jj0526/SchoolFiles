#include <stdio.h>

int main()
{
    float distance, speed, time;

    printf("Type distance to travel.\n");

    scanf("%f", &distance);

    printf("Type in average speed.\n");

    scanf("%f", &speed);

    time = distance / speed ;

    printf("time = %f", time);


}
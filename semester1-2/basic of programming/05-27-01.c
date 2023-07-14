#include <stdio.h>

void tempConvert(char FC);

void main()
{
    char FC;
    printf("C? F?");
    scanf("%c", &FC);

    tempConvert(FC);

}

void tempConvert(char FC)
{

    float temp;

    printf("how hot is it?");
    scanf("%f", &temp);

    if (FC == 'C')
    {
        temp = (temp - 32) * 5 / 9;
        printf("%f", temp);
    }
    else if (FC == 'F')
    {
        temp = temp * 9 / 5 + 32;
    }
    else
    {
        printf("error!");
    }
}
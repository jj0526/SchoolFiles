#include <stdio.h>

float tempConvert(char FC);
int main()
{
    char FC;
    printf("C? F?");
    scanf("%c", &FC);

    float a = tempConvert(FC);

    printf("%f", a);
    
    return 0;

}

float tempConvert(char FC)
{

    float temp;

    if (FC == 'C') // ' ' is for chars " " is for string
    {
        printf("how hot is it?");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        return temp;
    }
    else if (FC == 'F')
    {
        printf("how hot is it?");
        scanf("%f", &temp);
        temp = temp * 9 / 5 + 32;
        return temp;
    }
    else
    {
        printf("error!");
        return 0;
    }
}
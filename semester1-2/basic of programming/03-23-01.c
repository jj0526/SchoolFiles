#include <stdio.h>

int main(){
    float num1;
    float num2;
    float approx;

    printf("type the num1\n");
    scanf("%f",&num1);
    printf("type the num2\n");
    scanf("%f", &num2);

    if ( -0.001<num1 - num2 && num1 - num2 < 0.001 )
    {
        approx = 0;
    }
    else if ( num1 - num2 <= -0.001)
    {
        approx = (num2-num1)/2.0;
    }
    else if (num1 - num2 >= 0.001)
    {
        approx = ( num1 - num2 )/2.0;
    }

    printf("%f", approx);

}
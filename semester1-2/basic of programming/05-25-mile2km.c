#include <stdio.h>
float mile2km(float mile, float km);

int main(){
    float mile;
    float km;

    scanf("%f", &mile);
    float a = mile2km(mile, km);

    printf("%f", a);
}

float mile2km(float mile, float km){
    km = 1.6093 * mile;

    return km;
}
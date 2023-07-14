#include <stdio.h>
#include <math.h>

int main(){
    float radius;
    float height;
    float volume;

    scanf("%f", &radius);
    scanf("%f", &height);

    volumes(&radius, &height, &volume);
    printf("%f", volume);
}

void volumes(float *radius, float *height, float *volume){
    *volume = pow(*radius, 2) * *height;
}

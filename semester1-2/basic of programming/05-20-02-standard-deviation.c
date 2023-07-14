#include <stdio.h>
#include <math.h>

int main(){
    double value[20];
    double mean= 0;
    double powvalue = 0;
    double standard_deviation;

    for (int i = 0; i<10; i++){
        scanf("%lf", &value[i]);
    }

    for (int i = 0; i<10; i++){
        mean = mean + value[i];
    }
    mean = mean/10;

    for (int i = 0; i<10; i++){
        powvalue = powvalue + pow(value[i],2);
    }

    standard_deviation = powvalue/10 - pow(mean,2);
    standard_deviation = sqrt(standard_deviation);


    printf("mean : %lf, standard deviation : %lf", mean, standard_deviation);

    return 0;

}
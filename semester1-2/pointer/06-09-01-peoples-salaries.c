#include <stdio.h>

int main(){

    float salary[4];
    printf("input 4 salaries\n");
    for (int i = 0; i<4; i++){
        scanf("%f", &salary[i]);
    }
    float over[4];
    printf("input 4 overtime payments\n");
    for (int i = 0; i<4; i++){
        scanf("%f", &over[i]);
    }

    float totpay[4];

    int size = 4;

    money(salary, over, totpay, size);

}

void money(float salary[], float over[], float totpay[], int size){
    int time;
    printf("how long did they work for?\n");
    scanf("%d", &time);

    for (int i = 0; i<4; i++){
        if (time>40)
        {
            totpay[i] = 40 * salary[i] + (time-40)*over[i];
        }
        else if (((0<=time)&&(time<=40)))
        {
            totpay[i] = 40*salary[i];
        }
        else{
            printf("input the time again\n");
            return 0;
        }
    }
    for (int i = 0; i<4; i++){
        printf("%.2f    ", totpay[i]);
    }
}
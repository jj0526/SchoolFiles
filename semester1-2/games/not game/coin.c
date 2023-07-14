#include <stdio.h>

int main(){
    float money;
    float before_price;
    float after_price;
    float profit;
    float give;

    printf("how much did you put?\n");
    scanf("%f", &money);
    printf("How much was it at the moment?\n");
    scanf("%f", &before_price);
    printf("how much was it when you sold it?\n");
    scanf("%f", &after_price);

    profit = money/before_price*after_price - money;
    printf("%f\n", profit);

    give = profit - profit*0.0005;
    printf("%f", give);

}
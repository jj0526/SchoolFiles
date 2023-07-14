#include <stdio.h>

int main(){

    int value[20];
    printf("Input 10 numbers\n");

    for (int i = 0; i<10; i++){
        scanf("%d", &value[i]);
    }
    printf("Element        Value      Histogram\n");
    for (int i = 0; i<10; i++){
        printf("      %d           ", i);
        if (value[i]<10){
            printf(" ");
        }
        printf("%d      ", value[i]);
        for (int j = 0; j<value[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
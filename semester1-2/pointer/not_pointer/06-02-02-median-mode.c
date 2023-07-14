#include <stdio.h>

int main(){
    int num[10];

    for (int i =0; i<5; i++){
        scanf("%d", &num[i]);
    }
    int smallest = num[0];
    int ind;
    for (int i = 0; i<5; i++){
        for (int j = i; j<5; j++){
            if (smallest>num[j]){
                smallest = num[j];
            }
        }
    }
    printf("%d\n", num[2]);

    int num1[10];
    printf("input 8 numbers\n");
    for (int i = 0; i<8; i++){
        scanf("%d", &num1[i]);
    }
    int number[100];

    for (int i = 0; i<100; i++){
        number[i] = 0;
    }
    for (int i = 0; i<8; i++){
        number[num1[i]]++;
    }
    int mode=number[0];

    for (int i = 0; i<100; i++){
        if (mode<number[i]){
            mode = number[i];
        }
    }
    for (int i = 0; i<100; i++){
        if (mode == number[i]){
            printf("\n\n%d", i);
        }
    }

    return 0;
    
}
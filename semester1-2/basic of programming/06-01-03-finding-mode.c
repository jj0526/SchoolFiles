#include <stdio.h>

int main(){

    int num[10];
    for (int i = 0; i<8; i++){
        scanf("%d", &num[i]);
    }

    int mode[10];
    for (int i = 0; i<10; i++){
        mode[i] = 0;
    }
    int small;
    int temp;
    int k;

    for (int i = 0; i<8; i++){
        for (int j = i; j<8; j++){
            small = num[i];
            if (small >= num[j]){
                small = num[j];
                k = j;
            }
        }
        if (k>i){
            temp = num[i];
            num[i] = small;
            num[k] = temp;
        }
    }
    for (int i = 0; i<8; i++){
        printf("%d", num[i]);
    }
}
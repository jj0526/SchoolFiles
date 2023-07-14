#include <stdio.h>

int main(){
    int array[10];
    for (int i = 0; i<5; i++){
        scanf("%d", &array[i]);
    }
    int small;
    int temp;
    int k;

    for (int i = 0; i<5; i++){
        for (int j = i; j<5; j++){
            small = array[i];
            if (small > array[j]){
                small = array[j];
                k = j;
            }
        }
        if (k>i){
            temp = array[i];
            array[i] = small;
            array[k] = temp;
        }
    }
    printf("Median : %d", array[2]);
}
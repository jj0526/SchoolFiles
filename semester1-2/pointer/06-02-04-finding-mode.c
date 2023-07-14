#include <stdio.h>

int main(){

    int num[10];
    printf("input 8 numbers");
    for (int i = 0; i<8; i++){
        scanf("%d", &num[i]);
    }

    int size = 8;
}

void finding_mode(int num[], int size){
    int max = maxi[0];
    int maxi[100];
    for (int i = 0; i<100; i++){
        maxi[i] = 0;
    }
    for (int i = 0; i<100; i++){
        maxi[num[i]]++;
    }
    for (int i = 0; i <size; i++){
        if (max<maxi[i]){
            max = maxi[i];
        }
    }
}
#include <stdio.h>

int main(){
    int times;
    printf("how many times?\n");

    scanf("%d", &times);

    int num[100];

    for (int i = 0; i<times; i++){
        scanf("%d", &num[i]);
    }

    int size = times;

    sorting(num, size);
}

void sorting(int num[], int size){
    
    int smallest;
    int k = 0;
    int m = 0;
    for (int i = 0; i<size; i++){
        smallest = num[i];
        for (int j = i; j<size; j++){
            if (num[j]<smallest){
                smallest = num[j];
                k = 1;
                m = j;
            }
        }
        if (k==1){
            num[m] = num[i];
            num[i] = smallest;
            k = 0;
        }
    }
    for (int i = 0; i<size; i++){
        printf("%d", num[i]);
    }
}
#include <stdio.h>

int main(){
    int num[7];
    for (int i = 0; i<7; i++){
        scanf("%d", &num[i]);
    }
    int size = 7;

    sorts(num, size);

    for (int i = 0; i<7; i++){
        printf("%d", num[i]);
    }

    return 0;
}

void sorts(int num[], int size){
    int smallest;
    int k;

    for (int i = 0; i<size; i++){
        smallest = num[i];
        k = i;
        for (int j = i; j<size; j++){
            if (smallest > num[j]){
                smallest = num[j];
                k = j;
            }
        }
        if (k!=i){
            num[k] = num[i];
            num[i] = smallest;
        }
    }
}
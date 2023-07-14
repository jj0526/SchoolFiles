#include <stdio.h>

int main(){
    int num[10];

    for (int i = 0; i<5; i++){
        scanf("%d", &num[i]);
    }
    int max = num[0];

    int result = maximum(num, 5);

    printf("%d", result);


}

int maximum(int num[], int size){
    int max = num[0];

    for (int i = 0; i<5; i++){
        if (max<num[i]){
            max = num[i];
        }
    }
    return max;
}
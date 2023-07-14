#include <stdio.h>

void main(){
    float num[10]={38.4, -101.7, -2.1};
    int size = 3;
    abs_arr(num, size);
}

void abs_arr(float num[], int size){

    float abs_num[10];
    
    for (int i = 0; i<size; i++){
        if(num[i]<0){
            abs_num[i] = -1 * num[i];
        }
        else{
            abs_num[i] = num[i];
        }
        printf("%.1f   ", abs_num[i]);
    }

}
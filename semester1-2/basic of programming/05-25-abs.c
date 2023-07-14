#include <stdio.h>
#include <math.h>

int main(){

    double arr[10]={5,5,-2,7,-4};
    int size = 5;
    abs_arr(arr, size);

}

int abs_arr(double arr[], int size){
    for (int i = 0; i<size; i++){
        arr[i] = fabs(arr[i]);
        printf("%.1lf    ", arr[i]);
    }
}

//re[i] = fabs(arr[i]); making negative nums to positive
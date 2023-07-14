#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int copy[5];
    int rotated_arr[5];
    int size = 5;

    printArray(arr, size);
    rotate(arr, rotated_arr, size);
    rotate(rotated_arr, rotated_arr, size);
    rotate(rotated_arr, rotated_arr, size);
    printArray(rotated_arr, size);


}

void printArray(int arr[], int size){
    printf("Original array:\n");
    for (int i = 0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

void copyArray(int arr[], int copy[], int size){
    for (int i = 0; i<size; i++){
        copy[i] = arr[i];
    }
}

void rotate(int arr[], int rotated_arr[], int size){
    int tmp;
    tmp = arr[0];
    for (int i = 0; i<size-1; i++){
        rotated_arr[i] = arr[i+1];
    }
    rotated_arr[size-1] = tmp;
}
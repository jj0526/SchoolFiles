#include <stdio.h>

int main(){
    int arr1[10] = {1,2,3,6,1};
    int arr2[10] = {1,2,3,4,5};

    int size1 = 5;

    int temp = addArray(arr1,arr2, size1);

    return 0;

}

void addArray(int arr1[], int arr2[], int size1){
    int arr3[20];
    for (int i = 0; i<size1; i++){
        arr3[i] = arr1[i] + arr2[i];
        printf("%d    ", arr3[i]);
    }

}
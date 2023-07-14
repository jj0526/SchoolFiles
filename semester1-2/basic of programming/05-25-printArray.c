#include <stdio.h>

void printArray(int arr[], int count);
int main(){
    int array[100] = {1,2,3};
    int count = 0;

    for (int i =0; i<100; i++){
        if(array[i]=='\0'){
            break;
        }
        count++;
    }
    printArray(array, count);

    return 0;
}

void printArray(int arr[], int count){
    for (int i=0; i<count; i++){
        printf("%d  ", arr[i]);
    }
    
}
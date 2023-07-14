#include <stdio.h>

int main(){

    int num[5] = {1,2,3,4,5};

    int size = 5;

    printf("Original array:\n");

    printArray(num, size);

    printf("\n");

    int copied[5];

    copyArray(num, copied, size);
    printf("Copied array : ");
    printArray(num, size);



    int rotate_count;
    printf("Enter the number to rotate\n");
    scanf("%d", &rotate_count);
    printf("\n");

    for (int i = 0; i<rotate_count; i++){
        rotate(num, size);
    }

    printArray(num, size);


}

void printArray(int num[], int size){

    for (int i = 0; i<size; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

void copyArray(int num[], int copied[], int size){
    for (int i= 0; i<size; i++){
        copied[i] = num[i];
    }
}

void rotate(int num[], int size){
    int a = num[0];
    
    for (int i = 0; i<size-1; i++ ){
        num[i] = num[i+1];
    }
    num[size-1] = a;

}
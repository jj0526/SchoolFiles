#include <stdio.h>

int main(){
    int arr[3] = {0,1,2};

    printf("%p\n", arr+1);
    printf("%p", &arr[1]);
}
#include <stdio.h>
unsigned int hanoi(unsigned int n);

int main(){
    int n;
    printf("input a number\n");
    scanf("%d", &n);

    printf("%u",hanoi(n));

    return 0;
}

unsigned int hanoi(unsigned int n){
    if (n<2){
        return n;
    }
    else{
        return 2 * hanoi(n-1) + 1;
    }
}
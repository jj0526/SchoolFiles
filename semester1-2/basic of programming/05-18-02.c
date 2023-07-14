#include <stdio.h>
int sums(int i, int sum);

int main(){
    int i, sum = 0;
    int TheSum = sums(i,sum);

    printf("%d", TheSum);
}

int sums(int i, int sum){
    for ( i = 1; i<=1000; i++){
        sum = sum + i;
    }
    return sum;
}
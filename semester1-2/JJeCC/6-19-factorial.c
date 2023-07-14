#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int *count = 1;
    int result = 1;
    while (count<num){
        result = fac(num, result);
        count++;
    }
    printf("%d", result);
}
int fac(int *count, int result){
    result = result * *count;
}
#include <stdio.h>

int main(){
    int times;
    scanf("%d", &times);
    
    printf("%d", fibo(times));

    return 0;

}
int fibo(int times){
    int first = 0;
    int second = 1;
    int third;

    for (int i = 0; i<times; i++){
        if (i==0){
            third = first;
        }
        else if (i==1){
            third = first + second;
        }
        else{
            third = first + second;
            first = second;
            second = third;
        }
    }
    return third;
}
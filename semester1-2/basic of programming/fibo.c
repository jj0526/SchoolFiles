#include <stdio.h>
int fibo(int num);

int main(){

    int num;
    scanf("%d",&num);

    int result = fibo(num);
    printf("%d", result);

}
int fibo(int num){
    int first = 0;
    // 0 1 1 2 3 5 8 13
    int second = 1;
    int third;

    if (num == 1)
    {
        return 0;
    }
    else if (num == 2){
        return 1;
    }
    else{
        for (int i = 0; i<num-2; i++)
        {
            third = second + first;
            first = second;
            second = third;
        }
        return third;
    }

}
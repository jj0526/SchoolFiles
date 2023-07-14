#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;                           //   a   b
    ++a; ++b;                            //   1   1
    printf("a=%d, b=%d\n",a,b);          //   1   1
    b = a++;                             //   
    printf("a=%d, b= %d\n",a,b);         //   2   1
    b= ++a;                              //    
    printf("a=%d, b= %d\n", a,b);        //   3   3
    printf("a=%d,b=%d\n",a++,b++);       //   3   3 
    printf("a=%d,b=%d\n",a,b);           //   4   4
    printf("%d, %d",a,b);
    return 0;
}
#include <stdio.h>

int main(){
    int range[30][30][30][30];
    int num;

    scanf("%d",&num);
    for (int i = 1; i<=6; i++)
    {
        for (int j = 1; j<=6; j++)
        {
            for (int k = 1; k<=6; k++)
            {
                for (int l = 1; l<=6; l++)
                {
                    if ((i+j+k+l == num) )
                    {
                        // 순서대로 정렬하기

                        printf("{%d, %d, %d, %d} ", i,j,k,l);
                    }
                }
            }
        }
    }
    return 0;
}
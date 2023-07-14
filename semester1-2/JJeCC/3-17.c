#include <stdio.h>

int main(){

    int student[10][4];
    int sum = 0;
    
    int j = 0;

    for (int i = 0; i<10; i++)
    {
        printf("%d번째 학생의 성적을 입력해 주십시오.",i+1);
        
        for (int j = 0; j<4; j++)
        {
            scanf("%d", &student[i][j]); 

            sum = sum + student[i][j];
        }
    }

    printf("Avg : %f", (float)sum/40);

    return 0;

}
#include <stdio.h>
#include <math.h>

int main(){

    int num=0;
    int n=0;
    int sum = 0;
    int i = 0;

    int subjects[num][n];

    printf("how many students?");
    scanf("%d", &num );

    printf("how many subjects?");
    scanf("%d", &n);

    

    for (int i=0; i<num; i++)
    {
        printf("%d번째 학생의 성적은?",i+1);

        for (int j=0; j<n; j++)
        {
            scanf("%d", &subjects[i][j]);
            sum = sum + subjects[i][j];
        }
    }

    printf("%f", (float)sum/num/n);

}
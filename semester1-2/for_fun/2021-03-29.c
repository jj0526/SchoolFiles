#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int i = 0;
    int size = NULL;
    
    printf("input the num\n");
    scanf("%d",&size);

    int *p = NULL;
    p = (int*)malloc(sizeof(int)*size);

    p[0] = 1;
    printf("%d",p[0]);


    /*for (int i = 0; i++; j)
    {
        t[i] = rand() % 900 +100;

        printf("%d", t[i]);

        usleep(10000000000);

        printf("\\");
    }


    t[j] = rand() % 900 +100;

    printf("%d",t[j]);
    */

   free(p);

   return 0;
}
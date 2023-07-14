#include <stdio.h>

int main(){
    float F, C;
    int FC;

    printf(" C -> F : 1   F -> C : 2");
    scanf("%d",&FC);
    printf("type a number");

    switch (FC)
    {
        case 1:
            scanf("%f", &C);
            F = C * 9.0 / 5.0 + 32;
            printf("%f", F);
            break;

        case 2:
            scanf("%f", &F);
            C = (F - 32.0) * 5.0 / 9.0;
            printf("%f", C);
            break;
    }
    return 0;
}
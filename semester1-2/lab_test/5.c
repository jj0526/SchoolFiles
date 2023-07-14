#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int roll[2][7];

    int j = 0;

    int score = 0;

    //int t = rand() % 1001;

    while(1){
        int i = 0;
        roll[i][j] = rand()%6 + 1;
        i++;
        roll[i][j] = rand()%6 + 1;

        printf("Player rolled %d %d = %d", roll[i-1][j], roll[i][j], roll[i-1][j] + roll[i][j]);

        printf("my point is %d",roll[i-1][j] + roll[i][j])
        if ((roll[i-1][0] + roll[i][0] == 7)||(roll[i-1][j] + roll[i][j] == 11)){
            printf("Players wins");
            break;
        }
        else if ()
        else{
            score = socre + (roll[i-1][0] + roll[i][0] )

        }





        j++; // in the end
    }
}
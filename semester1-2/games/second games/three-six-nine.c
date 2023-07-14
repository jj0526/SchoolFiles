#include <stdio.h>
#include <time.h>

int main()
{

    char name[20];
    int num[1000];   //what the player typed
    int three[1000]; // the answer
    int score;
    int first; // starting first or not

    printf("3 6 9 game is starting soon!\n");
    printf("What's your nickname?\n");
    scanf(" %s", name);

    printf("0 for starting first. 1 for starting second.\n");
    scanf("%d", &first);

    int i = 0;

    if (first == 0)
    {
        printf("You're starting first!\n"); //user first
        for (int i = 0; i < 255; i++)
        {
            if (((i + 1) % 3 == 0) || ((i + 1) / 10) % 3)
            {
                three[i] = 
            }
            else
            {
                three[i] = i + 1;
            }
        }
        for (int i = 0; i < 255; i++)
        {
            if ((i + 1) % 2 == 0)
            {
                num[i] = three[i];
            }
        }

        char temp;
        char temp1;

        while (1)
        {
            scanf("%d",  &num[i]);

            printf("%c", temp);
            printf("%d",num[i]);

            if (num[i] != three[i])
            {
                printf("you lost\n");
                break;
            }
            else if (num[i] == 255)
            {
                printf("you won!\n");
                break;
            }

            i++;

            sleep(200000);

            if (num[i] == i+1)
            {
                printf("the opponent : %d\n", num[i]);
            }
            else
            {
                printf("%c\n", num[i]);
            }

            i++;
            score = i;
        }
    }
    else if (first == 1)
    {
        //computer first
        printf("the opponent is starting first");

        for (int i = 0; i < 255; i++)
        {
            if (((i + 1) % 3 == 0) || ((i + 1) / 10) % 3)
            {
                three[i] = 'c';
            }
            else
            {
                three[i] = i + 1;
            }
        }
        for (int i = 0; i < 255; i++)
        {
            if ((i + 1) % 2 == 1)
            {
                num[i] = three[i];
            }
        }

        while(1)
        {
            printf("the opponent : %c", num[i]);
            i++;

            scanf("%d", &num[i]);

            if (num[i] != three[i])
            {
                printf("you lost\n");
                break;
            }
            else if (num[i] == 255)
            {
                printf("you won!\n");
                break;
            }
            
            i++;

        }
    }
    else
    {
        printf("Try again");
    }
    printf("you've tried %d times!", score);

    return 0;
}
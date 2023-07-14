#include <stdio.h>
#include <time.h>
#include <math.h>

int main()
{

    int player[1000]; //what player typed
    int first;        // starting first or second
    int dig_count; // count of i
    int num_c = 0;       //how many Cs
    char first_c[1000];  //<c>
    char second_c[1000]; //c<c>
    char third_c[1000];  //cc<c>
    int score;           //score
    int jari[100];       //count of digits
    int the_num;         // i

    printf("0 for starting first. 1 for starting second\n");

    scanf("%d", &first);

    //when i say c (31) it escapes from the loop.

    int i = 0;
    int count = 0;

    if (first == 0)
    {
        printf("you're starting first!\n");

        while (1)
        {
            if ((i==998)||(i==997))
            {
                printf("you reached 999!\n★★★YOU WIN★★★");
                return 0;
            }

            num_c = 0;

            dig_count = 0;

            for (int j = 0; j < 3; j++) //counting the digs of the_num
            {
                the_num = the_num / 10;

                if (the_num > 0)
                {
                    dig_count++;
                }
            }

            the_num = i + 1;

            for (int j = 0; j < dig_count + 2; j++) //jari[j] : the num of each position
            {
                jari[j] = the_num % 10;
                the_num = the_num / 10;

                if ((jari[j] % 3 == 0) && (jari[j] != 0)) //checking if they can be divided by 3
                {
                    num_c++;
                }
            }

            if (num_c == 0) //if there's no 3, 6 or 9
            {
                scanf("%d", &player[i]);
                if (player[i] != i + 1)
                {
                    break; // when it's 31, it think its int
                }
            }
            else if (num_c == 1) //if there's one of them
            {
                scanf(" %c", &first_c[i]);

                if (first_c[i] != 'c')
                {
                   break;
                }
            }
            else if (num_c == 2) //if there's two of them
            {
                scanf(" %c%c", &first_c[i], &second_c[i]);

                if ((first_c[i] != 'c') || (second_c[i] != 'c'))
                {
                    break;
                }
            }
            else if (num_c == 3) // if there's three of them
            {
                scanf(" %c%c%c", &first_c[i], &second_c[i], &third_c[i]);

                if ((first_c[i] != 'c') || (second_c[i] != 'c') || (third_c[i] != 'c'))
                {
                    break;
                }
            }
            

            //the oponent's turn from here

            for (int j = 0; j < 3; j++) //initializing jari[0]-jari[2]
            {
                jari[j] = NULL;
            }

            num_c = 0;

            dig_count = 0;

            i++;

            the_num = i + 1;

            for (int j = 0; j < 3; j++)
            {
                the_num = the_num / 10;
                if (the_num > 0)
                {
                    dig_count++;
                }
            }

            the_num = i + 1;

            for (int j = 0; j < dig_count + 2; j++)
            {
                jari[j] = the_num % 10;
                the_num = the_num / 10;

                if ((jari[j] % 3 == 0) && (jari[j] != 0))
                {
                    num_c++;
                }
            }
            if (num_c == 0)
            {
                printf("the opponent : %d\n", i + 1);
            }
            else
            {
                printf("the opponent : ");

                for (int j = 0; j < num_c; j++)
                {
                    printf("c");
                }
                printf("\n");
            }
            
            for (int j = 0; j < 3; j++)
            {
                jari[j] = NULL;
            }
            i++;
        }
    }
    else if (first == 1) // starting second
    {
        printf("you're starting second\n");

        while (1)
        {
            if ((i==998)||(i==997))
            {
                printf("you reached 999!\n★★★YOU WIN★★★");
                return 0;
            }

            num_c = 0;

            the_num = i + 1;

            for (int j = 0; j < 3; j++)
            {
                the_num = the_num / 10;

                if (the_num > 0)
                {
                    dig_count++;
                }
            }

            the_num = i + 1;

            for (int j = 0; j < dig_count + 2; j++)
            {
                jari[j] = the_num % 10;
                the_num = the_num / 10;

                if ((jari[j] % 3 == 0) && (jari[j] != 0))
                {
                    num_c++;
                }
            }
            if (num_c == 0)
            {
                printf("the opponent : %d\n", i + 1);
            }
            else if (num_c>0)
            {
                printf("the opponent : ");

                for (int j = 0; j < num_c; j++)
                {
                    printf("c");
                }
                printf("\n");
            }

            for (int j = 0; j < 3; j++)
            {
                jari[j] = NULL;
            }
            i++;

            num_c = 0;

            dig_count = 0;

            the_num = i + 1;

            for (int j = 0; j < 3; j++) //initializing jari[0]-jari[2]
            {
                jari[j] = NULL;
            }

            for (int j = 0; j < 3; j++) //counting the digs of the_num
            {
                the_num = the_num / 10;

                if (the_num > 0)
                {
                    dig_count++;
                }
            }

            the_num = i + 1;

            for (int j = 0; j < dig_count + 2; j++) //jari[j] : the num of each position
            {
                jari[j] = the_num % 10;
                the_num = the_num / 10;

                if ((jari[j] % 3 == 0) && (jari[j] != 0)) //checking if they can be divided by 3
                {
                    num_c++;
                }
            }

            if (num_c == 0) //if there's no 3, 6 or 9
            {
                scanf("%d", &player[i]);

                if (player[i] != i + 1)
                {
                    break;
                }
            }
            else if (num_c == 1) //if there's one of them
            {
                scanf(" %c", &first_c[i]);

                if (first_c[i] != 'c')
                {
                    break;
                }
            }
            else if (num_c == 2) //if there's two of them
            {
                scanf(" %c%c", &first_c[i], &second_c[i]);

                if ((first_c[i] != 'c') || (second_c[i] != 'c'))
                {
                    break;
                }
            }
            else if (num_c == 3) // if there's three of them
            {
                scanf(" %c%c%c", &first_c[i], &second_c[i], &third_c[i]);

                if ((first_c[i] != 'c') || (second_c[i] != 'c') || (third_c[i] != 'c'))
                {
                    break;
                }
            }
            
            i++;

        }
    }

    printf("you've tried %d times!", (i + 1) / 2);

    return 0;
}
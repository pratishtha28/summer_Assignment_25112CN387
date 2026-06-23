#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("QUIZ APPLICATION\n\n");

    printf("1. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d",&ans);

    if(ans == 1)
        score++;

    printf("\n2. Which symbol is used for comments in C?\n");
    printf("1. #\n2. //\n3. &\n");
    scanf("%d",&ans);

    if(ans == 2)
        score++;

    printf("\n3. Which is a loop in C?\n");
    printf("1. for\n2. print\n3. scan\n");
    scanf("%d",&ans);

    if(ans == 1)
        score++;

    printf("\nYour score is %d/3",score);

    if(score == 3)
        printf("\nExcellent!");

    else if(score == 2)
        printf("\nGood!");

    else
        printf("\nKeep practicing!");

    return 0;
}
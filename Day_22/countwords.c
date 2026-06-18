#include <stdio.h>
int main()
{
    char a[200];
    int i, count = 1;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ' && a[i+1] != ' ')
            count++;
    }

    printf("Total words = %d", count);

    return 0;
}
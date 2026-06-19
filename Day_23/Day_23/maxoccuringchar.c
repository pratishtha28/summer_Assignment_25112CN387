#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char result;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[str[i]] > max)
        {
            max = count[str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character: %c", result);
    printf("\nFrequency: %d", max);

    return 0;
}
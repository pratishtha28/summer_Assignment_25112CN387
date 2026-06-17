#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], rev[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", a);

    while(a[length] != '\0')
    {
        length++;
    }

    j = length - 1;

    for(i = 0; i < length; i++)
    {
        rev[i] = a[j];
        j--;
    }

    rev[i] = '\0';

    printf("Reversed string = %s", rev);

    return 0;
}
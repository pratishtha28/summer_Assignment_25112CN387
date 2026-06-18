#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", a); 

    len = strlen(a);

    for(i = 0; i < len / 2; i++)
    {
        if(a[i] != a[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");

    return 0;
}
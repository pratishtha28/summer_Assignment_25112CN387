#include <stdio.h>
int main()
{
    char a[100], newstr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(a);
    //ye loop isliye hai taki hum string ke har character ko traverse kar sake aur agar character space nahi hai to usko new string me add kar sake
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != ' ')
        {
            newstr[j] = a[i];
            j++;
        }
    }

    newstr[j] = '\0';

    printf("String after removing spaces: %s", newstr);

    return 0;
}
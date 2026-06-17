#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
     //yahan hum gets() ka bhi use kar sakte hai lekin gets() ko use karna safe nahi hai kyunki ye buffer overflow ka risk create kar sakta hai. 
    while(str[i] != '\0')
    {
        length++;
        i++;
    }

    printf("Length of string = %d", length);

    return 0;
}
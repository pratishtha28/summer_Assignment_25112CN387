#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], rev[100], str2[100], copy[100];
    int choice, i, len, vowels, words;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';


    do
    {
        printf("\n\n----- STRING MENU -----");
        printf("\n1. Find Length");
        printf("\n2. Reverse String");
        printf("\n3. Convert Uppercase");
        printf("\n4. Convert Lowercase");
        printf("\n5. Count Vowels");
        printf("\n6. Count Words");
        printf("\n7. Check Palindrome");
        printf("\n8. Copy String");
        printf("\n9. Concatenate String");
        printf("\n10. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);
        getchar();   // clears Enter key


        switch(choice)
        {

            case 1:
                printf("Length = %d",strlen(str));
                break;


            case 2:
                len = strlen(str);

                for(i=0;i<len;i++)
                {
                    rev[i] = str[len-i-1];
                }

                rev[len]='\0';

                printf("Reverse = %s",rev);
                break;


            case 3:
                for(i=0;str[i]!='\0';i++)
                {
                    str[i] = toupper(str[i]);
                }

                printf("Uppercase = %s",str);
                break;


            case 4:
                for(i=0;str[i]!='\0';i++)
                {
                    str[i] = tolower(str[i]);
                }

                printf("Lowercase = %s",str);
                break;


            case 5:
                vowels=0;

                for(i=0;str[i]!='\0';i++)
                {
                    char ch = tolower(str[i]);

                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                    {
                        vowels++;
                    }
                }

                printf("Total vowels = %d",vowels);
                break;


            case 6:
                words=1;

                for(i=0;str[i]!='\0';i++)
                {
                    if(str[i]==' ')
                        words++;
                }

                printf("Total words = %d",words);
                break;


            case 7:
                len=strlen(str);

                for(i=0;i<len;i++)
                {
                    rev[i]=str[len-i-1];
                }

                rev[len]='\0';


                if(strcmp(str,rev)==0)
                    printf("Palindrome String");

                else
                    printf("Not Palindrome");

                break;


            case 8:
                strcpy(copy,str);

                printf("Copied String = %s",copy);
                break;


            case 9:

                printf("Enter second string: ");
                fgets(str2,sizeof(str2),stdin);

                str2[strcspn(str2,"\n")] = '\0';

                strcat(str,str2);

                printf("Concatenated String = %s",str);

                break;


            case 10:
                printf("Program Exited");
                break;


            default:
                printf("Invalid Choice");
        }


    }while(choice!=10);


    return 0;
}
#include <stdio.h>
#include <string.h>
struct Contact
{
    char name[50];
    char phone[15];
};


int main()
{
    struct Contact c[100];

    int n,i,choice;
    char search[50];


    printf("Enter number of contacts: ");
    scanf("%d",&n);


    do
    {
        printf("\n--- Contact Menu ---");
        printf("\n1. Add Contact");
        printf("\n2. Display Contact");
        printf("\n3. Search Contact");
        printf("\n4. Exit");


        printf("\nEnter choice: ");
        scanf("%d",&choice);


        switch(choice)
        {

            case 1:

                for(i=0;i<n;i++)
                {
                    printf("\nName: ");
                    scanf("%s",c[i].name);

                    printf("Phone: ");
                    scanf("%s",c[i].phone);
                }

                break;


            case 2:

                for(i=0;i<n;i++)
                {
                    printf("\nName: %s",c[i].name);
                    printf("\nPhone: %s\n",c[i].phone);
                }

                break;


            case 3:

                printf("Enter name: ");
                scanf("%s",search);


                for(i=0;i<n;i++)
                {
                    if(strcmp(c[i].name,search)==0)
                    {
                        printf("Phone: %s",c[i].phone);
                    }
                }

                break;


            case 4:
                printf("Exit");
                break;


            default:
                printf("Invalid choice");
        }


    }while(choice!=4);


    return 0;
}
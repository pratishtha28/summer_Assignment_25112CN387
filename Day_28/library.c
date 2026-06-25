#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    int issued;
};

int main()
{
    struct Book b[50];
    int n,i,choice;

    printf("Enter number of books: ");
    scanf("%d",&n);

    do
    {
        printf("\n--- Library Menu ---");
        printf("\n1. Add Books");
        printf("\n2. Display Books");
        printf("\n3. Issue Book");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nBook ID: ");
                    scanf("%d",&b[i].id);

                    printf("Book Name: ");
                    scanf("%s",b[i].name);

                    b[i].issued=0;
                }
                break;

            case 2:
                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",b[i].id);
                    printf("\nName: %s",b[i].name);

                    if(b[i].issued==1)
                        printf("\nStatus: Issued\n");
                    else
                        printf("\nStatus: Available\n");
                }
                break;


            case 3:
                printf("Enter Book ID: ");
                int id;
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        b[i].issued=1;
                        printf("Book Issued");
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
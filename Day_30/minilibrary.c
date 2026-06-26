#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    int issued;
};

int main()
{
    struct Book b[50];
    int n,i,choice,id;

    printf("Enter number of books: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("\nBook ID: ");
        scanf("%d",&b[i].id);

        printf("Book Name: ");
        scanf("%s",b[i].name);

        b[i].issued=0;
    }


    while(1)
    {
        printf("\n\n1.Display Books");
        printf("\n2.Issue Book");
        printf("\n3.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);


        if(choice==1)
        {
            for(i=0;i<n;i++)
            {
                printf("\nID: %d",b[i].id);
                printf("\nName: %s",b[i].name);

                if(b[i].issued)
                    printf("\nStatus: Issued");
                else
                    printf("\nStatus: Available");
            }
        }


        else if(choice==2)
        {
            printf("Enter Book ID: ");
            scanf("%d",&id);

            for(i=0;i<n;i++)
            {
                if(b[i].id==id)
                {
                    b[i].issued=1;
                    printf("Book Issued");
                }
            }
        }


        else
            break;
    }


    return 0;
}
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n,i,choice;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    do
    {
        printf("\n1. Add Employee");
        printf("\n2. Display Employee");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nEnter ID: ");
                    scanf("%d",&e[i].id);

                    printf("Enter Name: ");
                    scanf("%s",e[i].name);

                    printf("Enter Salary: ");
                    scanf("%f",&e[i].salary);
                }
                break;

            case 2:
                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",e[i].id);
                    printf("\nName: %s",e[i].name);
                    printf("\nSalary: %.2f\n",e[i].salary);
                }
                break;

            case 3:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice!=3);

    return 0;
}
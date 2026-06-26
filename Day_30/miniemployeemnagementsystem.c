#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};


int main()
{
    struct Employee e[50];
    int n,i;


    printf("Enter number of employees: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("\nEmployee ID: ");
        scanf("%d",&e[i].id);

        printf("Name: ");
        scanf("%s",e[i].name);

        printf("Salary: ");
        scanf("%f",&e[i].salary);
    }


    printf("\nEmployee Details:\n");


    for(i=0;i<n;i++)
    {
        printf("\nID: %d",e[i].id);
        printf("\nName: %s",e[i].name);
        printf("\nSalary: %.2f\n",e[i].salary);
    }


    return 0;
}
#include <stdio.h>

struct Salary
{
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main()
{
    struct Salary s[50];
    int n,i;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d",&s[i].id);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f",&s[i].basic);

        s[i].hra = s[i].basic * 0.20;
        s[i].da = s[i].basic * 0.10;
        s[i].total = s[i].basic + s[i].hra + s[i].da;
    }

    printf("\nSalary Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nID: %d",s[i].id);
        printf("\nName: %s",s[i].name);
        printf("\nBasic Salary: %.2f",s[i].basic);
        printf("\nHRA: %.2f",s[i].hra);
        printf("\nDA: %.2f",s[i].da);
        printf("\nTotal Salary: %.2f\n",s[i].total);
    }

    return 0;
}
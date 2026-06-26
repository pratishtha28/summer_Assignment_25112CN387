#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, search;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d",&s[i].roll);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }

    printf("\nStudent Records:\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nMarks: %.2f\n",s[i].marks);
    }


    printf("\nEnter roll number to search: ");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==search)
        {
            printf("\nRecord Found");
            printf("\nName: %s",s[i].name);
            printf("\nMarks: %.2f",s[i].marks);
            return 0;
        }
    }

    printf("Record not found");

    return 0;
}
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d",&n);

    do
    {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nEnter Roll No: ");
                    scanf("%d",&s[i].roll);

                    printf("Enter Name: ");
                    scanf("%s",s[i].name);

                    printf("Enter Marks: ");
                    scanf("%f",&s[i].marks);
                }
                break;

            case 2:
                printf("\nStudent Records:\n");
                for(i=0;i<n;i++)
                {
                    printf("\nRoll: %d",s[i].roll);
                    printf("\nName: %s",s[i].name);
                    printf("\nMarks: %.2f\n",s[i].marks);
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
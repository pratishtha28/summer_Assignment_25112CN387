#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    char course[50];
    float marks;
};

struct Student students[MAX];
int total = 0;


// Function to add student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d",&students[total].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]",students[total].name);

    printf("Enter Course: ");
    scanf(" %[^\n]",students[total].course);

    printf("Enter Marks: ");
    scanf("%f",&students[total].marks);

    total++;

    printf("\nStudent added successfully!\n");
}


// Function to display all students
void displayStudents()
{
    int i;

    if(total==0)
    {
        printf("\nNo records available\n");
        return;
    }

    printf("\n------ Student Records ------\n");

    for(i=0;i<total;i++)
    {
        printf("\nRoll Number : %d",students[i].roll);
        printf("\nName        : %s",students[i].name);
        printf("\nCourse      : %s",students[i].course);
        printf("\nMarks       : %.2f\n",students[i].marks);
    }
}


// Function to search student
void searchStudent()
{
    int roll,i;

    printf("\nEnter roll number to search: ");
    scanf("%d",&roll);


    for(i=0;i<total;i++)
    {
        if(students[i].roll==roll)
        {
            printf("\nStudent Found");

            printf("\nRoll Number : %d",students[i].roll);
            printf("\nName        : %s",students[i].name);
            printf("\nCourse      : %s",students[i].course);
            printf("\nMarks       : %.2f",students[i].marks);

            return;
        }
    }

    printf("\nStudent not found");
}


// Function to update student
void updateStudent()
{
    int roll,i;

    printf("\nEnter roll number to update: ");
    scanf("%d",&roll);


    for(i=0;i<total;i++)
    {
        if(students[i].roll==roll)
        {
            printf("Enter new name: ");
            scanf(" %[^\n]",students[i].name);

            printf("Enter new course: ");
            scanf(" %[^\n]",students[i].course);

            printf("Enter new marks: ");
            scanf("%f",&students[i].marks);


            printf("\nRecord updated successfully");
            return;
        }
    }

    printf("\nStudent not found");
}


// Function to delete student
void deleteStudent()
{
    int roll,i,j;

    printf("\nEnter roll number to delete: ");
    scanf("%d",&roll);


    for(i=0;i<total;i++)
    {
        if(students[i].roll==roll)
        {
            for(j=i;j<total-1;j++)
            {
                students[j]=students[j+1];
            }

            total--;

            printf("\nRecord deleted successfully");
            return;
        }
    }

    printf("\nStudent not found");
}



// Main function
int main()
{
    int choice;


    while(1)
    {
        printf("\n\n===== Student Management System =====");

        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");


        printf("\nEnter your choice: ");
        scanf("%d",&choice);



        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("\nThank you!");
                return 0;

            default:
                printf("\nInvalid choice");
        }
    }


    return 0;
}
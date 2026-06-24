#include <stdio.h>

struct Marksheet
{
    int roll;
    char name[50];
    int m1,m2,m3;
    int total;
    float percentage;
};

int main()
{
    struct Marksheet s;

    printf("Enter Roll No: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&s.m1,&s.m2,&s.m3);

    s.total = s.m1+s.m2+s.m3;
    s.percentage = s.total/3.0;

    printf("\n------ MARKSHEET ------\n");

    printf("Roll No: %d\n",s.roll);
    printf("Name: %s\n",s.name);

    printf("Subject 1: %d\n",s.m1);
    printf("Subject 2: %d\n",s.m2);
    printf("Subject 3: %d\n",s.m3);

    printf("Total Marks: %d\n",s.total);
    printf("Percentage: %.2f%%\n",s.percentage);

    if(s.percentage>=40)
        printf("Result: PASS");
    else
        printf("Result: FAIL");

    return 0;
}
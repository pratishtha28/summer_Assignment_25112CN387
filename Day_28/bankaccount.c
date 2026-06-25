#include <stdio.h>

struct Account
{
    int acc_no;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;
    int choice;
    float amount;


    printf("Enter Account Number: ");
    scanf("%d",&a.acc_no);

    printf("Enter Name: ");
    scanf("%s",a.name);

    printf("Enter Balance: ");
    scanf("%f",&a.balance);


    do
    {
        printf("\n--- Bank Menu ---");
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Display Account");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                printf("Enter amount: ");
                scanf("%f",&amount);

                a.balance+=amount;

                printf("Deposit Successful");
                break;


            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);

                if(amount<=a.balance)
                {
                    a.balance-=amount;
                    printf("Withdrawal Successful");
                }
                else
                    printf("Insufficient Balance");

                break;


            case 3:
                printf("\nAccount No: %d",a.acc_no);
                printf("\nName: %s",a.name);
                printf("\nBalance: %.2f",a.balance);
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
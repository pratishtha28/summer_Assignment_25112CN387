#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin;
    int balance = 10000;
    int choice, amount;

    printf("Enter ATM PIN: ");
    scanf("%d",&enteredPin);

    if(enteredPin != pin)
    {
        printf("Wrong PIN");
        return 0;
    }

    do
    {
        printf("\nATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Balance = %d",balance);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%d",&amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Collect your cash");
                }
                else
                    printf("Insufficient balance");

                break;

            case 3:
                printf("Enter amount: ");
                scanf("%d",&amount);

                balance += amount;
                printf("Money deposited successfully");

                break;

            case 4:
                printf("Thank you for using ATM");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}
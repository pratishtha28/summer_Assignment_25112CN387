#include <stdio.h>

struct Ticket
{
    int seat;
    char name[50];
    int booked;
};


int main()
{
    struct Ticket t[50];

    int n,i,choice,seat;


    printf("Enter number of seats: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        t[i].seat=i+1;
        t[i].booked=0;
    }


    do
    {
        printf("\n--- Ticket Menu ---");
        printf("\n1. Book Ticket");
        printf("\n2. Display Tickets");
        printf("\n3. Cancel Ticket");
        printf("\n4. Exit");


        printf("\nEnter choice: ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:

                printf("Enter seat number: ");
                scanf("%d",&seat);


                if(t[seat-1].booked==0)
                {
                    printf("Enter Name: ");
                    scanf("%s",t[seat-1].name);

                    t[seat-1].booked=1;

                    printf("Ticket Booked");
                }

                else
                    printf("Already booked");

                break;


            case 2:

                for(i=0;i<n;i++)
                {
                    printf("\nSeat %d ",t[i].seat);

                    if(t[i].booked)
                        printf("Booked by %s",t[i].name);
                    else
                        printf("Available");
                }

                break;


            case 3:

                printf("Enter seat: ");
                scanf("%d",&seat);

                t[seat-1].booked=0;

                printf("Ticket Cancelled");

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
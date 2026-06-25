#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[50];
    int n,i,choice;

    printf("Enter number of products: ");
    scanf("%d",&n);

    do
    {
        printf("\n----- Inventory Menu -----");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nProduct ID: ");
                    scanf("%d",&p[i].id);

                    printf("Product Name: ");
                    scanf("%s",p[i].name);

                    printf("Quantity: ");
                    scanf("%d",&p[i].quantity);

                    printf("Price: ");
                    scanf("%f",&p[i].price);
                }
                break;

            case 2:
                printf("\nInventory Details\n");

                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",p[i].id);
                    printf("\nName: %s",p[i].name);
                    printf("\nQuantity: %d",p[i].quantity);
                    printf("\nPrice: %.2f\n",p[i].price);
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
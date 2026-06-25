#include <stdio.h>

int main()
{
    int arr[100],n,i,choice,pos,value;

    printf("Enter array size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }

    do
    {
        printf("\n----- Array Menu -----");
        printf("\n1. Display");
        printf("\n2. Insert");
        printf("\n3. Delete");
        printf("\n4. Search");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                break;

            case 2:
                printf("Enter position and value: ");
                scanf("%d%d",&pos,&value);

                for(i=n;i>=pos;i--)
                    arr[i]=arr[i-1];

                arr[pos]=value;
                n++;
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d",&pos);

                for(i=pos;i<n-1;i++)
                    arr[i]=arr[i+1];

                n--;
                break;

            case 4:
                printf("Enter value: ");
                scanf("%d",&value);

                for(i=0;i<n;i++)
                {
                    if(arr[i]==value)
                        printf("Found at position %d",i);
                }
                break;

            case 5:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice!=5);

    return 0;
}
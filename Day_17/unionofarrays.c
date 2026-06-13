#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n1, n2, n3 = 0;
    int i, j, flag;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
        c[n3++] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n2; i++)
    {
        flag = 0;

        for(j = 0; j < n3; j++)
        {
            if(b[i] == c[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            c[n3++] = b[i];
        }
    }

    printf("Union of arrays:\n");
    for(i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int arr[10], even[10], odd[10], i, j = 0, k = 0;

    printf("Enter 10 numbers \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }

        else
        {
            odd[k] = arr[i];
            k++;
        }
    }


    printf("Even numbers: \n");
    for (i = 0; i < j; i++)
    {
        printf("%d \n", even[i]);
    }


    printf("Odd numbers: \n");
    for (i = 0; i < k; i++)
    {
        printf("%d \n", odd[i]);
    }

    return 0;
}
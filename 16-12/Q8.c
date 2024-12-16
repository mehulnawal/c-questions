#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 4, 5, 6};

    printf("Even numbers are: \n");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d\n", arr[i]);
        }
    }

    printf("Odd numbers are: \n");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
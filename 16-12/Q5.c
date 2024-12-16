#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 5, 6, 7};

    for (int i = 0; i < 5; i++)
    {
        printf("ar[%d]: %d\n", i, arr[i]);

        if (arr[i] == arr[i])
        {
            printf("The duplicate numbers are: %d", i)
        }
        else
        {
            printf("No duplicate values");
        }
    }

    return 0;
}
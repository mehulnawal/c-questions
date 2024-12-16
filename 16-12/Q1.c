#include <stdio.h>

int main()
{
    int sizeOfArray;

    printf("Enter size of array: ");
    scanf("%d", &sizeOfArray);

    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("arr[%d]: %d\n\n", i, arr[i]);
    }

    return 0;
}

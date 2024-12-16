#include <stdio.h>

int main()
{
    int sizeOfArray, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &sizeOfArray);

    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\n");

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    printf("\nThe sum of all numbers in array is: %d", sum);

    return 0;
}

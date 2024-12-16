#include <stdio.h>

int main()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arrA[size], arrB[size];

    for (int i = 0; i < size; i++)
    {
        printf("arrA[%d]: ", i);
        scanf("%d", &arrA[i]);
    }

    printf("\n");

    printf("\n Array A is: ");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arrA[i]);
        arrB[i] = arrA[i];
    }

    printf("\n Array B is: ");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arrB[i]);
    }

    return 0;
}
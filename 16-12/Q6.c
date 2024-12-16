// Write a program to find the max and min element in an array of integers.
#include <stdio.h>

int main()
{
    int arr[5] = {-1, 3, 4, 5, 6}, max = arr[0], min = arr[0];

    // max
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The max value is: %d ", max);

    // min
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The min value is: %d", min);

    return 0;
}
// Write a program to search for a specific element in an array and print its index if found, or -1 if not found.

#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 4, 5, 6}, num = 16, found = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            printf("Value found st index: %d", arr[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("-1");
    }

    return 0;
}
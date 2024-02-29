/*ACHOLA SHADRACK OWINO
ENE212-0262/2020*/
#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 9; i++)
    {
        arr[i] = i + 1;
    }

    printf("Original array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete a number from the middle
    int deleteIndex = 4; // 0-based index
    int deletedNumber = arr[deleteIndex];
    for (int i = deleteIndex; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Reserve a location for the deleted number
    arr[9] = 0;

    // Print the array after deletion
    printf("Array after deletion: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert a number that was omitted
    int insertIndex = 4;    // Insert at the position where we deleted earlier
    int insertedNumber = 5; // Number that was omitted
    for (int i = 9; i > insertIndex; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[insertIndex] = insertedNumber;

    // Print the final array
    printf("Final array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an integer array using the linear search algorithm
 * @array: Pointer to the array to be searched
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return (int)i;
        }
    }
    return -1;
}
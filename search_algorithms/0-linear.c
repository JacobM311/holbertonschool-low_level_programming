#include "search_algos.h"

/**
 * linear_search - Searches for a value using the linear search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index where the value was found, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }
    return (-1);
}
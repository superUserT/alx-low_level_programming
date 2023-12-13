#include "search_algos.h"

/**
 * binary_search_recursive - binary search recursively
 * @array: Pointer to the first element of the array to search in
 * @left: Index representing the left boundary of the current subarray
 * @right: Index representing the right boundary of the current subarray
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
    size_t i;
    size_t mid;

    if (array == NULL || left > right)
        return (-1);

    printf("Searching in array: ");
    for (i = left; i < right; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[right]);

    mid = (left + right) / 2;

    if (array[mid] == value)
        return mid;
    else if (array[mid] < value)
        return binary_search_recursive(array, mid + 1, right, value);
    else
        return binary_search_recursive(array, left, mid - 1, value);
}

/**
  * binary_search - uses binary search to Search for
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return: Return index where value is found or -1 for NULL.
  */

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return (-1);
    }
    return binary_search_recursive(array, 0, size - 1, value);
}

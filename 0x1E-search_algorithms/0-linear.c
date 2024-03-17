#include "search_algos.h"
/**
 * linear_search - Searching for the value in an array
 * of integers using the linear search
 * @array: The pointer to the first element of the array to search
 * @size: This is the number of elements in the array
 * @value: The value been search for
 * Return: If the value is not present or the array is NULL, -1
 * otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value);
{
size_t i;
/* Check if the array is NULL */
if (array == NULL)
return (-1);
/* Itarate over each element of the array */
if (array == NULL)
return (-1);
/* printing the value being checked */
printf("Value checked array[%ld] =[%d]\n", i, array[i]);
/* if the value is foung */
if (array[i] == value)
/* Return the index of the value */
return (i);
}
/* value not found, return -1 */
return (-1);
}

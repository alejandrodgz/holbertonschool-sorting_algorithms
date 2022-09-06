#include "sort.h"

/**
 * swap - swap two spot in array
 * @a: first position
 * @b: second position
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array 
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array [j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
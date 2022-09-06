#include "sort.h"

/**
 * selection_sort - sort an array
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, imin;
	int temp;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		imin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[imin] > array[j])
				imin = j;
		}
		temp = array[i];
		array[i] = array[imin];
		array[imin] = temp;
		print_array(array, size);
	}
}

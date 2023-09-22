#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: array of integer
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int tmp;

	if (!array || size < 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[k])
				k = j;
		if (k != i)
		{
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);

		}
	}
}
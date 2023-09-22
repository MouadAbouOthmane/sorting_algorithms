#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 *
 * @array: array of integer
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	lomuto(array, 0, (int)size - 1, size);
}

/**
 * lomuto - Lomuto partition scheme
 *
 * @array: array of integer
 * @size: size of array
 * @lo: low index
 * @hi: hight index
 */

void lomuto(int *array, int lo, int hi, size_t size)
{
	int i, j, tmp, pivot;

	if (lo >= hi)
		return;

	pivot = array[hi];
	j = lo;

	for (i = lo; i < hi; i++)
	{
		if (array[i] <= pivot)
		{
			if (array[j] != array[i])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			j++;
		}
	}
	if (array[hi] != array[j])
	{
		tmp = array[hi];
		array[hi] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
	lomuto(array, lo, j - 1, size);
	lomuto(array, j + 1, hi, size);
}

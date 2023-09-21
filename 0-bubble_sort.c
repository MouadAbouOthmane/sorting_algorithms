#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * 
 * @array: array of integer
 * @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int is_sort = 0;
    int tmp;

    if (!array || size < 1)
        return;

    for (i = 0; i < size; i++)
    {
        is_sort = 0;
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;

                print_array(array, size);
                is_sort = 1;
            }
        }
        if (is_sort == 0)
            return;
    }
}

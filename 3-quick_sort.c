#include "sort.h"
#include <stddef.h>

/**
 * quick_sort_actual - sorts the array actually
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 * @low: low element
 * @high: high element
 */

void quick_sort_actual(int *array, int low, int high, size_t size)
{
	int i = low, j = low, pivot = array[high], valHolder;

	if (low >= high)
		return;

	for (; i <= high; i++)
	{
		if ((array[i] <= pivot) && (i != j))
		{
			if (i != j)
			{
				valHolder = array[i];
				array[i] = array[j];
				array[j] = valHolder;
				j++;
				print_array(array, size);
			} else
				j++;
		}
	}
	if (j != high)
	{
		valHolder = array[high];
		array[high] = array[j];
		array[j] = valHolder;
		print_array(array, size);
	}
	quick_sort_actual(array, low, j - 1, size);
	quick_sort_actual(array, j + 1, high, size);
}
/**
 * quick_sort - passes the array to be sorted
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (!array || size == 0)
		return;

	quick_sort_actual(array, low, high, size);

}

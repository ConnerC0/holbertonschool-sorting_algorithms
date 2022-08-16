#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - sorts the array in numerical order
 *
 * @arr: The array to be sorted
 * @size: The size of arr
 */

void bubble_sort(int arr[], size_t size)
{
	size_t i = 0, j = 0, temp;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
				print_array(arr, size);
			}
		}
	if (swapped == false)
		break;
	}
}

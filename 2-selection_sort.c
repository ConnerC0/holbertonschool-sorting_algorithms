#include "sort.h"
#include <stddef.h>

/**
 * selection_sort - sorts the array
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t placeHolder, elemCheck, smallP;
	int valHolder, smallerVal;

	for (placeHolder = 0; placeHolder < size; placeHolder++)
	{
		smallerVal = array[placeHolder];
		smallP = placeHolder;
		for (elemCheck = placeHolder + 1; elemCheck < size; elemCheck++)
		{
			if (array[elemCheck] < smallerVal)
			{
				smallerVal = array[elemCheck];
				smallP = elemCheck;
			}
		}
		if (smallP != placeHolder)
		{
			valHolder = array[placeHolder];
			array[placeHolder] = smallerVal;
			array[smallP] = valHolder;
			print_array(array, size);
		}
	}
}

#include "sort.h"

/**
* bubble_sort -  an implementation of bubble sort
* @array: the array to be sorted
* @size: the size of the array
*
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int tmp;
	unsigned int swapped = 0;

	if (!array || size < 2)
		return;

	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
			i++;
		}
		/*incase it was already sorted*/
		if (!swapped)
			return
		j++;
	}
}

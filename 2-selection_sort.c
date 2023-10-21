#include "sort.h"

/**
 * selection_sort - sorts an array following the selection of algorithm
 * @array: the array to sort
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, k;

	register int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				k = j;
		}
		tmp = array[i];
		array[i] = array[k];
		array[k] = tmp;
		if (i != k)
			print_array(array, size);
	}
}

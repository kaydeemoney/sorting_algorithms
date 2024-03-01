#include "sort.h"

/**
 * k_swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void k_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool testin-bub = false;

	if (array == NULL || size < 2)
		return;

	while (testin-bub == false)
	{
		testin-bub = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				k_swap(array + i, array + i + 1);
				print_array(array, size);
				testin-bub = false;
			}
		}
		len--;
	}
}
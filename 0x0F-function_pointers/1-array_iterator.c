#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - prints the elements in the array
 * @array: an array
 * @size: the size of the array
 * @action: a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

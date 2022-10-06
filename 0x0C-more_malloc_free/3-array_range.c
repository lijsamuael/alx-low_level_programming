#include <stdlib.h>
#include "main.h"

/**
*array_range - function that creates an array of integers.
*@min: min number
*@max: max number
*
*Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *ary;
	int i;

	if (min > max)
		return (NULL);

	ary = malloc(sizeof(*ary) * ((max - min + 1)));

	if (ary == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ary[i] = min;

	return (ary);
}


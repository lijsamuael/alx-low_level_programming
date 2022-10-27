#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * binary_to_uint - converts binary numbers to decimal
 * @b:a char of 0 or 1
 * Return: the decimal of the given character array
 */
unsigned int binary_to_uint(const char *b)
{
	int i, pow = 1;

	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimal += pow;
		pow *= 2;
	}
	return (decimal);
}

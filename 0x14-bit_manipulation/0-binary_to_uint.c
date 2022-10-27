#include "holberton.h"
/**
 * binary_to_uint - binary to integer.
 * @b: binary.
 * Return: number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int bit = 0;
while (b && *b)
{
	if (*b != '0' && *b != '1')
		return (0);

	bit = bit << 1;
	bit = bit | (*b - '0');
	b++;
}
	return (bit);
}

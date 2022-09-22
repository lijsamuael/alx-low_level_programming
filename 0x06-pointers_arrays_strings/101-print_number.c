#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
	_putchar('-');
	i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}

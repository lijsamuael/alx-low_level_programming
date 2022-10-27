#include "main.h"
/**
 * print_binary - converts decima number to decimal
 * @n: a decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

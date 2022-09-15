#include "main.h"

/**
 * print_numbers - it prints numbers form 0 to 9
 *
 * Return: the multiplication of the two numbers
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}

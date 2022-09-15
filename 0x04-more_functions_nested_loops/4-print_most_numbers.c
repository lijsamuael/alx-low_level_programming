#include "main.h"

/**
 * print_most_numbers - it prints numbers form 0 to 9
 *
 * Return: the multiplication of the two numbers
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar('0' + i);
	_putchar('\n');
}


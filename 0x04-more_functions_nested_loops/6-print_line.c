#include "main.h"

/**
 * print_line - print line in the terminal
 * @n: the number of '-' characters to be printed as a line
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}

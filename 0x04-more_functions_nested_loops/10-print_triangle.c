#include "main.h"

/**
 * print_triangle - print trialgles usin '#'
 * @size: the size of the trangle
 * Return: void
 */
void print_triangle(int size)
{
	int length, width;

	if (size == 0)
		_putchar('\n');
	for (length = 0; length <= size; length++)
	{
		for (width = size; width > length; width--)
		{
			_putchar(' ');
		}
		for (width = 0; width < length; width++)
		{
			_putchar('#');
		}
		if (length != size)
			_putchar('\n');
	}
}

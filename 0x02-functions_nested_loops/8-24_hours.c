#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{

	int i, j;

	i = 0;
	for (; i < 24 ; i++)
	{
	j = 0;
	for (; j < 60 ; j++)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar('\n');
	}
	}
}

#include "main.h"

/**
 * more_numbers - print numbers 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int count, i;

	count = 0;
	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int timer;

	char alpha;

	for (timer = 0; timer < 10; timer++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

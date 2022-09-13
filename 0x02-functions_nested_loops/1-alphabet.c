#include "main.h"
/**
 * print_alphabet - Printing small lettets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

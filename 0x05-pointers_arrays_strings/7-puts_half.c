#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: a string
 * Return: void
 */
void puts_half(char *str)
{
	unsigned long int i;

	int n;

	n = strlen(str) / 2;

	for (i = n; i <= strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

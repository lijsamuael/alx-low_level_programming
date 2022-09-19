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

	int n, len;

	len = strlen(str);

	n = len / 2;

	for (i = n; i <= strlen(str); i++)
	{
		if (len % 2 == 0)
			_putchar(str[i]);
		else if (len % 2 == 1)
			_putchar(str[i + 1]);

	}
	_putchar('\n');
}

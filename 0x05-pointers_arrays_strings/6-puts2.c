#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: a string
 * Return: void
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


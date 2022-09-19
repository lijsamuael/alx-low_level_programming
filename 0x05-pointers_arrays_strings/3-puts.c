#include "main.h"
#include <string.h>
/**
 * _puts - prints a string
 * @str:
 * Return: void
 */
void _puts(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

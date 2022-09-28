#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a string
 * @s: a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

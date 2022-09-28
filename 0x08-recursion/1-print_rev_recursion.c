#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in a reverse order
 * @s: a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - finds the length os the giben string
 * @s: a string
 * Return: the length of a  string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

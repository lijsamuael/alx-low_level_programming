#include <unistd.h>
/**
 * _putchar - Writes character to standard output
 * @c: the character to print
 *
 *  Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


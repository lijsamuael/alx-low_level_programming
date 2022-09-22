#include "main.h"
#include<string.h>

/**
 * _strncat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}

#include "main.h"
#include <string.h>
/**
 * rev_string - reverses the given string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	int len;

	char rev[10];

	len = strlen(s) - 1;

	for (i = len; i >= 0; i--)
	{
		rev[len - i] = s[i];
	}
	strcpy(s, rev);
}

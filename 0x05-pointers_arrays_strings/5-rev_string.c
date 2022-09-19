#include "main.h"
#include <string.h>
/**
 * rev_string - reverses the given string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char rev[500];

	int i;

	int len;

	len = strlen(s) - 1;

	strcpy(rev, s);

	for (i = len; i >= 0; i--)
	{
		rev[len - i] = s[i];
	}
	strcpy(s, rev);
}

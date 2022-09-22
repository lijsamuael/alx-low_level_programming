#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: string.
 * Return: string.
 */
char *cap_string(char *s)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int a = 0;
	unsigned long int i;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (i = 0; i < strlen(spc) ; i++)
		{
		if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			s[a] = s[a] - 32;
		}
	}
	return (s);
}

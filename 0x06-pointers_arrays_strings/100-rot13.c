#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	char input[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char output[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		int j = 0;

		for (; *(input + j) != '\0'; j++)
		{
			if (*(s + i) == *(input + j))
			{
				*(s + i)  = *(output + j);
				break;
			}
		}
	}
	return (s);
}

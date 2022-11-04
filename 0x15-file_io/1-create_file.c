#include "main.h"
/**
 * _strlen - funtion count len of char.
 * @s: count string.
 * Return: string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * create_file - create file function
 * @filename: file name.
 * @text_content: text of file
 * Return: 1 ok, -1 error.
 */
int create_file(const char *filename, char *text_content)
{
int value, len, x;

if (filename == NULL)
{
return (-1);
}
value  = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (value == -1)
return (-1);
if (text_content == NULL)
{
if (close(value) == -1)
{
return (-1);
}
else
{
return (1);
}
}
len = _strlen(text_content);
x = write(value, text_content, len);
if (x == -1)
{
return (-1);
}
return (1);
}


#include "main.h"
/**
 * _strlen - count len of string
 * @s: string pointer
 * Return: len of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * read_textfile - function read textfiles
 * @filename: pointer namefile
 * @letters: letters for print
 * Return: print letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t value;
char *buffer;
int file, reading;

buffer = malloc(sizeof(char) * letters);
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
if (!buffer)
{
free(buffer);
return (0);
}
reading = read(file, buffer, letters);
if (reading == -1)
{
return (0);
}
value = _strlen(buffer);
value = write(STDOUT_FILENO, buffer, value);
if (value == -1)
{
free(buffer);
return (0);
}
free(buffer);
if (close(file) == -1)
{
return (-1);
}
else
{
return (value);
}
}

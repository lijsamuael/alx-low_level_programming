#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main entry
 * @argc: number of arguments passed
 * @argv: the array of arguments
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

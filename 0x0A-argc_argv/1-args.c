#include <stdio.h>
/**
 * main - the main entry of the program
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 * Return: an integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

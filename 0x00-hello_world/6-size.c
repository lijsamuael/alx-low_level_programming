#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)" , sizeof(char));
printf("\nSize of an int: %d%s", sizeof(int), " byte(s)");
printf("\nSize of a long int: %d byte(s)", sizeof(long int));
printf("\nSize of a long long int: %d byte(s)", sizeof(long long int));
printf("\nSize of a float: %d%s", sizeof(float), " byte(s)");
return (0);
}

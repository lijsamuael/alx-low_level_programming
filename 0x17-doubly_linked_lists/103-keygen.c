#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * f3 - Gets the valid third char
 * @user: Address of the first char in username
 * @len: Length of the username
 *
 * Return: Index to use in map
 */
int f3(char *user, unsigned int len)
{
	unsigned int c = 1;
	unsigned int i = 0;

	while (i < len)
	{
		c *= user[i];
		++i;
	}

	return ((c ^ 0x55) & 0x3f);
}

/**
 * f4 - Gets the valid third char
 * @user: Address of the first char in username
 * @len: Length of the username
 *
 * Return: Index to use in map
 */
int f4(char *user, int len)
{
	int i = 0;
	char c = user[0];

	while (i < len)
	{
		if (user[i] > c)
			c = user[i];

		++i;
	}
	srand(c ^ 0xe);
	return (rand() & 0x3f);
}

/**
 * f5 - Gets the valid third char
 * @user: Address of the first char in username
 * @len: Length of the username
 *
 * Return: Index to use in map
 */
int f5(char *user, int len)
{
	char c = 0;
	int i = 0;

	while (i < len)
	{
		c += user[i] * user[i];
		++i;
	}

	return ((c ^ 0xef) & 0x3f);
}

/**
 * f6 - Gets the valid third char
 * @len: First char of username
 *
 * Return: Index to use in map
 */
int f6(unsigned int len)
{
	unsigned int c = 0;
	unsigned int i = 0;

	while (i < len)
	{
		c = rand();
		++i;
	}

	return ((c ^ 0xe5) & 0x3f);
}

/**
 * main - Generates a password for a given username
 * @argc: Unused
 * @argv: Pointer to first pointer in an array of pointers each pointing to
 * the first char of an arg
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char map[] =
		"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *user = argv[1];

	unsigned long int ulen = strlen(user);

	char key[7];

	int c3 = f3(user, ulen), c4 = f4(user, ulen), c5 = f5(user, ulen),
		c6 = f6(user[0]);

	int c1 = ((ulen ^ 0x3b) & 0x3f), c2;

	unsigned int c = 0, i = 0;

	for (; i < ulen; ++i)
		c += user[i];

	c2 = ((c ^ 0x4f) & 0x3f);

	key[0] = map[c1];
	key[1] = map[c2];
	key[2] = map[c3];
	key[3] = map[c4];
	key[4] = map[c5];
	key[5] = map[c6];
	key[6] = '\0';

	printf("%s", key);

	(void)(argc);
	return (0);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main file that copy file
 * @argc: arguments input.
 * @argv: pointers arguments. 
 * Return: return 0 if all ok.
 */
int main(int argc, char *argv[])
{
	int fgo, forigin, checkorigin, checkgo;
	int checkerw, checkerr;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	forigin = open(argv[1], O_RDONLY);
	if (forigin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fgo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fgo == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((checkerr = read(forigin, buffer, 1024)) > 0)
	{
		checkerw = write(fgo, buffer, checkerr);
		if (checkerw != checkerr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (checkerr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	checkorigin = close(forigin);
	if (checkorigin == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", forigin), exit(100);
	checkgo = close(fgo);
	if (checkgo == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fgo), exit(100);
	return (0);
}

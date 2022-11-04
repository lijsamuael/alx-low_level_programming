#include "main.h"
#define BUFFLEN (1024)
/**
 * main- function av y av
 * @ac: file
 * @av: number of letters of the file
 * Return: numbers of letters or zero it fails
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to, read_from, write_to, close_from, close_to;
	char buffer[BUFFLEN];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((read_from = read(fd_from, buffer, BUFFLEN)) != '\0')
	{
		if (read_from == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		write_to = write(fd_to, buffer, read_from);
		if (write_to == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	close_from = close(fd_from);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from), exit(100);
	close_to = close(fd_to);
		if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to), exit(100);
	return (0);
}

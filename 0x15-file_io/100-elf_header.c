#include "main.h"
#include <elf.h>

int main(int argc, char **argv)
{
	ssize_t fd, read_res;
	char buffer[16];
	size_t i;
	char match[4] = {0x7f, 'E', 'L', 'F'};

	if (argc != 2)
		err("Improper usage\n");

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		err("Could not open file\n");

	read_res = read(fd, buffer, 16);
	if (read_res < 0)
		err("Could not read from file\n");

	for (i = 0; i < 4; i++)
	{
		if (buffer[i] != match[i])
			err("Not an ELF file!\n");
	}

	printf("ELF Header:\n");
	printmagic(buffer);
	printclass(buffer);
	printdata(buffer);
	printversion(buffer);
	printos(buffer);
	printabversion(buffer);

	if (close(fd))
		err("Could not close file");

	return (0);
}

void err(char *msg)
{
	size_t len;

	for (len = 0; msg[len]; len++)
		;
	write(STDERR_FILENO, msg, len);

	exit(98);
}

void printabversion(char *buffer)
{
	ptitle("ABI Version");

	printf("%d", buffer[8]);

	printf("\n");
}

void printos(char *buffer)
{
	ptitle("OS/ABI");

	switch (buffer[7])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[7]);
	}

	printf("\n");
}

void printversion(char *buffer)
{
	ptitle("Version");

	switch (buffer[6])
	{
		case EV_NONE:
			printf("0");
			break;
		case EV_CURRENT:
			printf("1 (current)");
			break;
		default:
			printf("%d <unknown: %%lx>", (int)buffer[6]);
	}

	printf("\n");
}

void printdata(char *buffer)
{
	ptitle("Data");

	switch (buffer[5])
	{
		case ELFDATANONE:
			printf("none");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[5]);
	}

	printf("\n");
}

void printmagic(char *buffer)
{
	unsigned int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%.2x ", buffer[i]);
	printf("\n");
}

void printclass(char *buffer)
{
	ptitle("Class");

	switch (buffer[4])
	{
		case ELFCLASSNONE:
			printf("none");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[4]);
	}
	printf("\n");
}

void ptitle(char *title)
{
	unsigned int size = 37;
	unsigned int tlen, i;

	printf("  ");
	printf("%s:", title);

	for (tlen = 0; title[tlen]; tlen++)
		;

	for (i = 0; i < size - 3 - tlen; i++)
		printf(" ");
}

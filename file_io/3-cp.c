/* libraries for System Call */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* other libraries */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * copy_file - Copies the content of a file to another file.
 * @file_from: A pointer to the name of the soucrce file to copy.
 * @file_to: A pointer to the name of destination file.
 *
 * Return: 1 on success, -1 on failure
 */

int copy_file(const char *file_from, char *file_to)
{
	int open_from, open_to, write_to;
	char *buffer;
	int read_from = 1;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);

	open_from = open(file_from, O_RDONLY);
	open_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	do
	{
		read_from = read(open_from, buffer, 1024);
		write_to = write(open_to, buffer, read_from);
	} while (read_from > 0 && write_to != -1);

	free(buffer);

	if (open_from == -1 || read_from == -1)
		return (98);

	if (open_to == -1 || write_to == -1)
		return (99);

	if (close(open_from) == -1)
		return (101);
	if (close(open_to) == -1)
		return (102);

	return (1);
}

/**
 * main - copies the content of a file to another file.
 * @ac: the number of elements.
 * @av: the list of elements.
 * Return: Always 0 on succes.
 */
int main(int ac, char **av)
{
	int code;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	code = copy_file(av[1], av[2]);

	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, av[1]);
		exit(98);
	}

	if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(98);
	}

	if (code == 101)
	{
		dprintf(STDERR_FILENO, "Error: Can't close to %s\n", av[1]);
		exit(100);
	}
	if (code == 102)
	{
		dprintf(STDERR_FILENO, "Error: Can't close to %s\n", av[2]);
		exit(100);
	}
	return (0);
}

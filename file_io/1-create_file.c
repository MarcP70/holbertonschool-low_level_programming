#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * creat_file - Create a file with text content.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t o, w;
	int len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (o == -1)
		return (-1);

	w = write(o, text_content, len);
	if (w == -1 || w != len)
	{
		close(o);
		return (-1);
	}

	close(o);
	return (1);
}

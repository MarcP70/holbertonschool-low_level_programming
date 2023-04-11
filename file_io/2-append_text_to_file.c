/* libraries for System Call */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* other libraries */
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
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

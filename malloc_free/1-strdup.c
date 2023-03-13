#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - this function returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter
 *
 * @str: the pointer to the duplicated string
 *
 * Return: the pointer to the new string
 */

char *_strdup(char *str)
{
	char *ar;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	ar = malloc((len + 1) * sizeof(char)); /* +1 pour le \0 plus tard */

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ar[i] = str[i];

	ar[len] = '\0';
	return (ar);
}

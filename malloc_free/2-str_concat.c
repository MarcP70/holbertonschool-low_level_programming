#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - this function concatenates two strings and returns a pointer to
 *  the result string
 *
 * @s1: the pointer to the first string
 * @s2: the pointer to the second string
 *
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i;
	int len_s1 = 0;
	int len_s2 = 0;
	int len;

	if (s1 != NULL)
	for (i = 0; s1[i]; i++)
		len_s1++;

	if (s2 != NULL)
	for (i = 0; s2[i]; i++)
		len_s2++;

	len = len_s1 + len_s2;

	ar = malloc((len + 1) * sizeof(char)); /* +1 pour le \0 plus tard */

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		ar[i] = s1[i];

	for (i = len_s1; i < len; i++)
		ar[i] = s2[i - len_s1];

	ar[len] = '\0';
	return (ar);
}

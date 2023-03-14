#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - This function concatenates two strings
 * @s1: string number 1
 * @s2: string number 2
 * @n: number caracter of string 2
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int len;

	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			len_s1++;

	if (s2 != NULL)
		for (i = 0; s2[i]; i++)
			len_s2++;

	if (n < len_s2)
		len_s2 = n;

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

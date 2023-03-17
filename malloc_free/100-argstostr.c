#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - this function concatenates all the arguments of your program
 *
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: th pointer of new array
 */

char *argstostr(int ac, char **av)
{
	char **array;
	int i, j;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);

	array = malloc(sizeof(char*) * ac);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]) + 2;
		array[i] = malloc(sizeof(char) * len);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			array[i][j] = av[i][j];

		array[i][j] = '\n';
		array[i][j + 1] = '\0';
	}

	return (*array);
}

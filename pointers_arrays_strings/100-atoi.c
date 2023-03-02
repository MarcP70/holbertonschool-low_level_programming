#include <stdio.h>
#include "main.h"

/**
 * _atoi - This function convert a string to an integer
 *
 * @s:
 *
 * Return: the found number into a string
 */

int _atoi(char *s)
{
	int index = 0;
	int signe = 1;
	int num = 0;
	int nb_num = 0;
	int exit = 0;

	while (s[index] != '\0' && exit == 0)
	{
		if (s[index] == '-')
			signe = signe * (-1);

		if (s[index] >= '0' && s[index] <= '9')
		{
			num = (num * 10) + s[index] - '0';
			nb_num = nb_num + 1;
		}

		if (nb_num > 0 && !(s[index] >= '0' && s[index] <= '9'))
			exit = 1;

		index++;
	}
	return (signe * num);
}

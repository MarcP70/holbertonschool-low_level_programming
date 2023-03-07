#include <stdio.h>
#include "main.h"

/**
 * _strspn -  This function gets the length of a prefix substring
 *
 * @s: pointer to the string sourc
 * @accept: pointer to the string allowed caracters
 *
 * Return: the number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	char *p, *q;


	for (p = s; *p; p++)
	{
		for (q = accept; *q; q++)
		{
			if (*p == *q)
			{
				count++;
				break;
			}
		}

		if (*q == '\0')
			return (count);
	}

	return (count);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - This function prints the strings passed to the function
 * @separator: the string to be printed between the strings
 * @n: the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	char *elem;

	if (n != 0)
	{
		va_start(my_list, n);
		for (i = 0; i < n; i++)
		{
			elem = va_arg(my_list, char *);

			if (elem != NULL)
				printf("%s", elem);
			else
				printf("(nil)");

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);

		}
		printf("\n");
		va_end(my_list);
	}
}

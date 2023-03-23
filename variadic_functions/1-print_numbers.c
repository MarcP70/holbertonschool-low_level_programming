#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - This function prints the numbers passed to the function
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(ap, unsigned int));
			if (i < n && separator != NULL)
				printf("%s", separator);

		}
		va_end(ap);
	}
	printf("\n");
}

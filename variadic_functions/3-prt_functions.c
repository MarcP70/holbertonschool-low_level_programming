#include <stdio.h>
#include "3-variadic_functions.h"

/**
 * prt_char - This function print a character
 * @a: the character to print
 */
void prt_char(char a)
{
        printf("%c", a);
}

/**
 * prt_int - This function print a integer
 * @a: the integer to print
 */
void prt_int(int a)
{
	printf("%d", a);
}

/**
 * prt_float - This function print a float
 * @a: the float to print
 */
void prt_float(float a)
{
        printf("%f", a);
}

/**
 * prt_str - This function print a string
 * @a: the string to print
 */
void prt_str(char *a)
{
	if (a == NULL)
		printf("(nil)";
	printf("%s", a);
}

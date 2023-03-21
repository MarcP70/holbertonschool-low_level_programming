#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: name of the pointer to function
 * @name: name of the person
 */


void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}

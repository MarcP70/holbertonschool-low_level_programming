#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*  Structures */
#include <stdarg.h>
/**
 * struct printer - This struct associate the fonction to the symbol
 *
 * @symbol: The symbol of data type
 * @function: The function associated
 */
typedef struct printer
{
	char *symbol;
	void (*function)(va_list arg);
} printer_t;

/* Functions prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

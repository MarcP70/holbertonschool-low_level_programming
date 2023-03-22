#include <stdio.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int calc;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (operator[0] != '+' && operator[0] != '-' && operator[0] != '*'
	    && operator[0] != '/' && operator[0] != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((operator[0] == '/' && num2 == 0) || (operator[0] == '%'
						  && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	calc = get_op_func(operator)(num1, num2);

	printf("%d\n", calc);

	return (0);
}

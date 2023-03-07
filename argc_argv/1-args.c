#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (**argv)
		printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

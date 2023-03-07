#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	exit(EXIT_SUCCESS);
}

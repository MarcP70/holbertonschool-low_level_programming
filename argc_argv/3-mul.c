#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int result;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	exit(EXIT_SUCCESS);
}

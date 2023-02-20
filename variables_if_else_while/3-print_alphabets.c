/* more headers goes there */
# include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Program entry point
 * This program prints the alphabet in lowercase and uppercase
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

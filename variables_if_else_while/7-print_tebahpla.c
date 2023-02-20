/* more headers goes there */
# include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Program entry point
 * This program prints the alphabet in lowercase in reverse
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

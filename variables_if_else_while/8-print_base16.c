/* more headers goes there */
# include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Program entry point
 * This program prints all single digit numbers of base 10 starting from 0
 * with restrictions
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

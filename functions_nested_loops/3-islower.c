/**
 * _islower - function that checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if charater is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int var;

	if (c > 96 && c < 123)
	{
		var = 1;
	} else
	{
		var = 0;
	}
	return (var);
}

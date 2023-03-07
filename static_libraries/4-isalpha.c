/**
 * _isalpha - function that checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if charater is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	int var;

	if (c > 96 && c < 123)
	{
		var = 1;
	} else if (c > 64 && c < 91)
	{
		var = 1;
	} else
	{
		var = 0;
	}
	return (var);
}

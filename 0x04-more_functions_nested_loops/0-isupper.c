/**
 * isupper - Checks for uppercase
 * @c: arg
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}

/**
 * isupper - Checks for uppercase
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int a;
	
	for (a = 'A'; a <= 'Z'; a++)
	{
		if ((char)c == a)
		{
			return (1);
		}
	}
	return (0);
}

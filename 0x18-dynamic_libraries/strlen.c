/**
 * _strlen - p
 * @s: o
 * Return: 0
 */
int _strlen(char *s)
{
	int zz = 0;

	while (s[zz] != '\0')
		zz++;
	return (zz);
}

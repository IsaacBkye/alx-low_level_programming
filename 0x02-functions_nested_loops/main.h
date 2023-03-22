#include <unistd.h>
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int c);
int print_last_digit(int c);
void jack_bauer(void);

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int a;

	for (a = 97; a < (97 + 26); a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return;
}
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b < (97 + 26); b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	return;
}
int _islower(int c)
{
	if (c > 96 && c < 97+26)
	{
		return (1);
	} else
	{
		return (0);
	}
}
int _isalpha(int c)
{
	if (c > 96 && c < 97 + 26)
	{
		return (1);
	} else if (c > 64 && c < 65 + 26)
	{
		return (1);
	} else
	{
		return (0);
	}
}
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		_putchar('0');
		return (0);
	}
}
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	} else
	{
		return (c);
	}
}
int print_last_digit(int c)
{
	if (c % 10 < 0)
	{
		return ((c % 10) * -1);
	} else
	{
		return (c % 10);
	}
}
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 4; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
	return;
}

#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
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

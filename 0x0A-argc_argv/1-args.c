#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints number of args passed
 * @argc: arg
 * @argv: arg1
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}

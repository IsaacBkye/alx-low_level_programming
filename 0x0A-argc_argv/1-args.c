#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints number of args passed
 * @argc: arg
 * @argv: arg1
 */
int main(int argc, char **argv)
{
	(void)(**argv);

	printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}

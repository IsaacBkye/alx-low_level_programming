#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arg
 * @argv: arg1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	exit(EXIT_SUCCESS);
}

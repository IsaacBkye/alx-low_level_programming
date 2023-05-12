#include "main.h"
/**
 * errr - Prints to stderr
 * @i: arg1
 * @str: arg
 */
void errr(int i, char *str)
{
	if (i == 1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (i == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
}
/**
 * main - imitates cp system call
 * @argc: number of passed args
 * @argv: values of passed args
 * Return: 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	int fileopen1, fileopen2, fileread, filewrite;
	char buffer[1024];

	if (argc != 3)
		errr(1, NULL);
	fileopen1 = open(argv[1], O_RDONLY);
	if (fileopen1 == -1)
		errr(2, argv[1]);
	fileopen2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fileopen2 == -1)
		errr(2, argv[2]);
	do {
		fileread = read(fileopen1, buffer, 1024);
		if (fileread == -1)
			errr(1, argv[1]);
		filewrite = write(fileopen2, buffer, fileread);
		if (filewrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (fileread == 1024);
	if (close(fileopen1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileopen1);
		exit(100);
	}
	if (close(fileopen2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileopen2);
		exit(100);
	}
	return (0);
}

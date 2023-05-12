#include "main.h"
/**
 * main - imitates cp system call
 * argc - number of passed args
 * argv - values of passed args
 * Return: 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	int fileopen1, fileopen2, fileread, filewrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileopen1 = open(argv[1], O_RDONLY);
	fileopen2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	do
	{
		fileread = read(fileopen1, buffer, 1024);
		if (fileread == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filewrite = write(fileopen2, buffer, fileread);
		if (filewrite == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
			exit(99);
		}
	} while (fileread == 1024);
	if (close(fileopen1) == -1 || close(fileopen2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE %d\n", -1);
		exit(100);
	}
	return (0);
}

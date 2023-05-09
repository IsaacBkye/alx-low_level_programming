#include "main.h"
/**
 * rerad_textfile - Reads a txt file
 * @filename: arg
 * @letters: arg1
 * Return: 0 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileread, fileclose, filewrite;
	char *a;
	int filepointer;

	if (filename == NULL)
		return (0);
	a = (char *)malloc(sizeof(char) * letters);
	if (a == NULL)
		return (-1);
	filepointer = open(filename, O_RDONLY);
	if (filepointer == -1)
		return (0);
	fileread = read(filepointer, a, letters);
	if (fileread == -1)
		return (-1);
	filewrite = write(STDOUT_FILENO, a, fileread);
	if (filewrite == -1)
		return (-1);
	fileclose = close(filepointer);
	if (fileclose == -1)
		return (-1);
	return (fileread);
}

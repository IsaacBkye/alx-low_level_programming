#include "main.h"
/**
 * create_file - Creates a file
 * @filename: arg
 * @text_content: arg1
 * Return: 0 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int filepointer;
	int len = 0;
	int filewrite;

	filepointer = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 400);
	if (filepointer == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len] != '\0')
		len++;
	filewrite = write(filepointer, text_content, len);
	if (filewrite == -1)
		return (-1);
	close(filepointer);
	return (1);
}

#include "main.h"
/**
 * append_text_to_file - Appends to a file
 * @filename: arg
 * @text_content: arg1
 * Return: 0 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filewrite;
	int fileopen;
	int len;

	if (filename == NULL)
		return (-1);
	fileopen = open(filename, O_APPEND | O_WRONLY);
	if (fileopen == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len] != '\0')
		len++;
	filewrite = write(fileopen, text_content, len);
	if (filewrite == -1)
		return (-1);
	close(fileopen);
	return (1);
}

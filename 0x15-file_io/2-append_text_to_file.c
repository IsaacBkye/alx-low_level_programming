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
	int len = 0;
	int getFlag;

	if (filename == NULL)
		return (-1);
	fileopen = open(filename, O_RDWR | O_APPEND);
	if (fileopen == -1)
		return (-1);
	getFlag = fcntl(fileopen, F_GETFL) & O_ACCMODE;
	if (getFlag == O_RDONLY)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		filewrite = write(fileopen, text_content, len);
		if (filewrite == -1)
			return (-1);
		filewrite = write(fileopen, "\n", 1);
		if (filewrite == -1)
			return (-1);
	}
	close(fileopen);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - function that append text to the end of a file
 *
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 on success or if the file exists. -1 on fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, writeCount;

	/*return -1 if file does not exist*/
	if (!filename)
		return (-1);
	/*open file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	/*return -1 if open fails*/
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		/*count text content*/
		for (i = 0; text_content[i] != '\0'; i++)
			;
		/*write to file*/
		writeCount = write(fd, text_content, i);
		/*return -1 if write fails*/
		if (writeCount == -1)
			return (-1);
	}
	/*close file*/
	close(fd);
	return (1);
}

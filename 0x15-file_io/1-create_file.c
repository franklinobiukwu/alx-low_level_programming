#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 * return -1 on failure (i.e if file cannot be created, written etc)
 * return -1 if filename is NULL
 * create empty file if text_content is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd;
	size_t count = 0;
	ssize_t nu_written;

	if (filename == NULL)
		return (-1);
	/*open file*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/*return -1 if open fails*/
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	/*count character in text_content*/
	for (i = 0; text_content[i]; i++)
		count++;
	/*write content to file*/
	nu_written = write(fd, text_content, count);
	/*close file*/
	close(fd);
	if (nu_written == -1)
		return (-1);

	return (1);
}

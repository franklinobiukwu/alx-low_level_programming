#include "main.h"

/**
 * create_file - a function that  creates a file
 * created file must have permissions rw-------
 * do not change permission if file already exists
 *
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to file
 *
 * Return: 1 on Success or
 * -1 on failure(if file cannot be created or be written)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int writeCount, textCount = 0;

	/*return NULL if filename is NULL*/
	if (!filename)
		return (-1);
	/*create file with permissions*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/*return -1 on creation failure*/
	if (fd == -1)
		return (-1);
	/*set NULL content*/
	if (!text_content)
		text_content = "";
	/*count text*/
	while (text_content[textCount] != '\0')
	{
		textCount++;
	}
	/*write to file*/
	writeCount = write(fd, text_content, textCount);
	/*return -1 if write fails*/
	if (writeCount == -1)
		return (-1);
	/*close file*/
	close(fd);

	return (1);
}

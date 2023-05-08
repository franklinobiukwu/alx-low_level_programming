#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 *
 * @filename: filename
 * @letters: size of character to read and print
 *
 * Return: number of characters read and print
 * return 0 if opened or read fails
 * return 0 if file is NULL
 * return 0 if write fails or doesn't write expected size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void *buf;
	ssize_t nu_read, nu_written, check;

	check = letters;
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	/*return 0 open fails*/
	if (fd == -1)
		return (0);
	/*create buffer*/
	buf = malloc(sizeof(char *) * letters);
	/*return 0 if malloc fails*/
	if (buf == -1)
	{
		close(fd);
		return (0);
	}
	/*read from file*/
	nu_read = read(fd, buf, letters);
	/*close file*/
	close(fd);
	/*return 0 if read fails*/
	if (nu_read == -1)
	{
		free(buf);
		return (0);
	}
	/*write to to POSIX standard output*/
	nu_written = write(STDOUT_FILENO, buf, letters);
	/*return 0 if write fails or doesn't write expected size*/
	if (nu_written == -1 || nu_written != check)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (nu_written);

}

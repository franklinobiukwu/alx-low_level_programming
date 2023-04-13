#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to file path
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readCount, writeCount;
	char *buff;

	/*return 0 if file name is NULL*/
	if (filename == NULL)
		return (0);
	/*open file*/
	fd = open(filename, O_RDONLY);
	/*return 0 if file open fails*/
	if (fd == -1)
		return (0);
	/*create buffer to store read letters*/
	buff = malloc(sizeof(char) * letters + 1);
	/*return 0 if fails*/
	if (buff == NULL)
		return (0);
	/*read letters in file*/
	readCount = read(fd, buff, letters);
	/*return 0 if read fails*/
	if (readCount == -1)
		return (0);
	/*write to standard output*/
	writeCount = write(STDOUT_FILENO, buff, readCount);
	/*return 0 if write fails*/
	if (writeCount == -1 || readCount != writeCount)
		return (0);
	/*write NULL character at the end*/
	buff[writeCount] = '\0';
	/*close file*/
	close(fd);
	/*free memory*/
	free(buff);
	return (writeCount);
}

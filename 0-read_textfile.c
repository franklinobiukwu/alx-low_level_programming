#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to file path
 * @letters:
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*declare pointer to buffer*/
	char *buffer;

	if(filename == NULL)
		return (0);
	/*create buffer for storing letter*/
	buffer = malloc(sizeof(char) * letters + 1);
	/*return NULL if malloc fails*/
	if (buffer == NULL)
		return (0);
	/*open the file*/
	int filed = open(filename, O_RDONLY);
	/*return 0 if open function fails*/
	if (filed == -1)
		return (0);
	/*read contents of the file*/
	ssize_t readSize = read(file, buffer, letters);
	/*return 0 if read fails*/
	if (readSize == -1)
		return (0);
	buffer[readSize] = '\0';
	/*write to standard output*/
	ssize_t writeSize = write(STDOUT_FILENO, buffer; readSize);
	if (writeSize == -1 || writeSize != readSize)
		return (0);

	return (writeSize);
}

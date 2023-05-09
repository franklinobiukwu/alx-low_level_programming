#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @ac: arguement count
 * @av: argument vector
 *
 * Return: 1 on success.
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *buf;
	ssize_t nu_read, nu_written;

	if (ac < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);/*open source file*/
	if (fd_from == -1)
		handle_error("open", 1, av[1], fd_from);
	/*open destination file*/
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		handle_error("open", 2, av[2], fd_to);
	buf = malloc(sizeof(char) * 1024);
	/*create buffer*/
	if (buf == NULL)
	{
		close(fd_from);
		close(fd_to);
		return (-1);
	}
	/*read content of source file*/
	do {
		nu_read = read(fd_from, buf, 1024);
		if (nu_read == -1)
			return (-1);
		nu_written = write(fd_to, buf, nu_read);
		if (nu_written == -1)
			return (-1);
	} while (nu_read == 1024);
	free(buf);
	if (close(fd_from) == -1)/*close files*/
		handle_error("close", 1, av[1], fd_from);
	if (close(fd_to) == -1)
		handle_error("close", 1, av[1], fd_to);
	return (1);
}

/**
 * handle_error - handle error associated with the program above
 *
 * @op: operation that failed or has the error
 * @fd: file descriptor associated with error
 * @filename: name of file associated with error
 * @ac: argument count
 *
 * Return: void
 */
void handle_error(char *op, int ac, char *filename, int fd)
{
	char *open_f = "open";
	char *close_f = "close";

	if (op == close_f)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (op == open_f && ac == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (op == open_f && ac == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		close(fd);
		exit(99);
	}
}

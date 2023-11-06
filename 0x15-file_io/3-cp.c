#include "main.h"

/**
 * check_error - check is a file handle error
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @argv: argument vector
 *
 * Return: no return
 */
void check_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copy file contents to another file
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, err;
	char buffer[1024];
	ssize_t	num_char, num_w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_from, file_to, argv);

	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(file_from, buffer, 1024);
		if (num_char == -1)
			check_error(-1, 0, argv);
		num_w = write(file_to, buffer, num_char);
		if (num_w == -1)
			check_error(0, -1, argv);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX std output
 * @filename: pointer to file to read
 * @letters: num of letters to read and print
 *
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *buffer;
	ssize_t num_r, num_w;

	if (filename == NULL)
		return (0);

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	num_r = read(fildes, buffer, letters);
	num_w = write(STDOUT_FILENO, buffer, num_r);

	close(fildes);
	free(buffer);

	return (num_w);
}

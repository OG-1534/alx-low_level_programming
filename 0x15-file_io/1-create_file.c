#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string
 * to write to the file
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fildes;
	int num_let;
	int w_rtn;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fildes == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (num_let = 0; text_content[num_let]; num_let++)
		;
	w_rtn = write(fildes, text_content, num_let);

	if (w_rtn == -1)
		return (-1);
	close(fildes);

	return (1);
}

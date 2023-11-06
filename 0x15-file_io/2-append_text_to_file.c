#include "main.h"

/**
 * append_text_to_file - appends text
 * at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * to add at the end of the file
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	int num_let;
	int w_rtn;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);

		if (fildes == -1)
			return (-1);

	if (text_content)
	{
		for (num_let = 0; text_content[num_let]; num_let++)
			;
		w_rtn = write(fildes, text_content, num_let);

		if (w_rtn == -1)
			return (-1);
	}
	close(fildes);

	return (1);
}

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to be created
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1for success
 *  return: -1 Otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fdef, words, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fdef = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	words = write(fdef, text_content, len);

	if (fdef == -1 || words == -1)
		return (-1);

	close(fdef);

	return (1);
}

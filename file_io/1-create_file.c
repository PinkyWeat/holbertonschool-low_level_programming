#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of file.
 * @text_content: content.
 * Return: 1 success, -1 failure.
 */
int create_file(const char *filename, char *text_content)
{
	int createMe, sizeMe = strlen(text_content), newW;
	mode_t modsie = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	/* create file */
	createMe = open(filename, O_RDWR | O_CREAT | O_TRUNC, modsie);
	/* check creation */
	if (createMe == -1)
		return (-1);
	/* if there's content write it */
	if (text_content)
		newW = write(createMe, text_content, sizeMe);
	if (newW == -1)
	{
		close(createMe);
		return (-1);
	}
	close(createMe);
	return (1);
}

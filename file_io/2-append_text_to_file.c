#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file.
 * @text_content: files content.
 * Return: 1 on success or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int createMe;

	if (!filename)
	return (-1);
	/* create file */
	createMe = open(filename, O_WRONLY | O_APPEND);
	/* check creation */
	if (createMe == -1)
	return (-1);
	/* if there's content write it */
	if (text_content)
		write(createMe, text_content, strlen(text_content));
	close(createMe);
	return (1);
}

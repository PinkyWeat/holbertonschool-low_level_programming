#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of file.
 * @text_contesnt: content.
 * Return: 1 success, -1 failure.
 */
int create_file(const char *filename, char *text_content)
{
	int createMe, sizeMe = strlen(text_content);
	mode_t modsie = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	else
	{
		createMe = open(filename, O_CREAT, modsie);
		if (!text_content)
			write(createMe, "", 1);
		else
			write(createMe, text_content, sizeMe);
		close(createMe);
		return (1);
	}
}

#include "main.h"
/**
 * read_textfile - func reads text file n' prints to the POSIX standard output.
 * @filename: file name.
 * @letters: number of letters it should read and print.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cCount, saveMe = open(filename, O_RDONLY);
	char *allChars = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	/* Check malloc */
	if (!allChars)
		return (0);
	if (saveMe == -1)
		return (0);
	/* counts chars */
	cCount = read(saveMe, allChars, letters);
	/* prints */
	write(STDOUT_FILENO, allChars, cCount);
	close(saveMe);
	return (cCount);
}

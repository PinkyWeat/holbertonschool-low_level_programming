#include "main.h"
/*
 * read_textfile - function reads a text file and prints it to the POSIX standard output.
 * @filename: file name.
 * @letters: number of letters it should read and print.
 # Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cCount = 0, saveMe = open(filename, O_RDONLY);
	void *allChars = malloc(sizeof(char) * letters);
	size_t i = 0;

	if (saveMe == 0)
		return (0);
	/* save all chars in allChars, len is letters */
	read(saveMe, allChars, letters);
	/* count chars */
	while (i < letters)
	{
		cCount++;
		i++;
	}
	return (cCount);
}

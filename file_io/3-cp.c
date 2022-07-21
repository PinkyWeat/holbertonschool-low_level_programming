#include "main.h"
/**
 * main - entry point.
 * @ac: arg count.
 * @argv: arg info.
 * Return: 99 / 98 / 97.
 */
int main(int ac, char *av[])
{
	/* Check arg num */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	copy_text(av[1], av[2]);
	exit(0);
}
/**
 * copy_text - copies text.
 * @from: this file.
 * @to: this file.
 */
void copy_text(const char *from, const char *to)
{
	int file_from, file_to, readMe = 5555, writeMe, closeMe;
	char *cCount[5555];
	mode_t modsie = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	file_from = open(from, O_RDONLY);
	/* Check if file_from exists */
	if (file_from == - 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", from[1]);
		exit(98);
	}

	file_to = open(to, O_CREAT | O_TRUNC | O_WRONLY, modsie);
	/* Check file_to */
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", to[2]);
		exit(99);
	}

	/* check readMe */
	while (readMe == 1024)
	{
		/* read? */
		readMe = read(file_from, cCount, 5555);
		if (readMe == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", to[1]);
			exit(98);
		}
		/* write? */
		writeMe = write(file_to, cCount, readMe);
		if (writeMe == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", to[2]);
			exit(99);
		}
	}
	/* close */
	closeMe = close(file_from);
	if (closeMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from); 
		exit(100);
	}
	closeMe = close(file_to);
	if (closeMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

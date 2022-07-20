#include "main.h"
/**
 * main - entry point.
 * @ac: arg count.
 * @argv: arg info.
 * Return: 99 / 98 / 97.
 */
int main(int ac, char *av[])
{
	int file_from, file_to, readMe = 1024, writeMe, closeMe;
	char *cCount[1024];

	/* Check arg num */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	/* Check if file_from exists */
	if (file_from == - 1)
	{
		dprintf(STDERR_FILENO,"Error: %s Can't read from file %s", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_CREAT | O_TRUNC | o_WRONLY, 0664);
	/* Check file_to */
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	/* check readMe */
	while (readMe == 1024)
	{
		/* read? */
		readMe = read(file_from, cCount, 1024);
		if (readMe == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
			exit(99);
		}
		/* write? */
		writeMe = write(file_to, cCount, readMe);
		if (readMe == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
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
	return (0);
}

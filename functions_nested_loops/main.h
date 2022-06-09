#ifndef MAIN_H
#define MAIN_H

int _putchar(char);

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

#endif

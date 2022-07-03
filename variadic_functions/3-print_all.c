#include "variadic_functions.h"
/**
 * print_All - prints anything literally.
 * @format: format used (char, int, etc).
 */
void print_all(const char * const format, ...)
{
	va_list x;
	char *string;
	int i, cond, formatSelect;

	va_start(x, format);
	i = 0;
	formatSelect = strlen(format);
	while (format[i])
	{
		cond = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c",va_arg(x, int));
			cond = 1;
			break;
		case 'i':
			printf("%d", va_arg(x, int));
			cond = 1;
			break;
		case 'f':
			printf("%f", va_arg(x, double));
			cond = 1;
			break;
		case 's':
			string = va_arg(x, char *);
			!string ? printf("(nil)") : printf("%s", string);
			cond = 1;
			break;
		}
		if (cond == 1 && i < formatSelect - 1)
			printf(", ");
		i++;
	}
	va_end(x);
	printf("\n");
}

#include "main.h"
/**
 *
 */
int _atoi(char *whoKnows)
{
	if (*whoKnows == '\0')
			return (0);
	return (1 + _atoi(whoKnows + 1));
}

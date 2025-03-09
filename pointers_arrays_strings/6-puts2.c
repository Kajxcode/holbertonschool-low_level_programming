#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other char of string
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

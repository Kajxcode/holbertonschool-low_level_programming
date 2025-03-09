#include <unistd.h>
#include "main.h"

void puts_half(char *str)
{
	int len = 0;
	int mid;

	while (str[len] != '\0')
	{
		len++;
	}
	mid = len / 2;
	if (len % 2 != 0)
	{
		mid++;
	}
	while (str[mid] != '\0')
	{
		write(1, &str[mid], 1);
		mid++;
	}
	_putchar('\n');
}

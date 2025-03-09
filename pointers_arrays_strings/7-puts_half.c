#include <unistd.h>
#include "main.h"

void puts_half(char *str)
{
	int len = 0;
	int mid = len / 2;

	while (str[len] != '\0')
	{
		len++;
	}
	while (str[mid] != '\0')
	{
		write(1, &str[mid], 1);
		mid++;
	}
}
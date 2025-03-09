#include <unistd.h>
#include "main.h"

void puts_half(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	int mid = len / 2;

	while (str[mid] != '\0')
	{
		write(1, &str[mid], 1);
		mid++;
	}
}
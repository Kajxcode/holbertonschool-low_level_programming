#include <unistd.h>
#include "main.h"

void puts_half(char* str)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	int mid = len / 2;

	while (s[mid] != '\0')
	{
		write(1, &s[mid], 1);
		mid++;
	}
}
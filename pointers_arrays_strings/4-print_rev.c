#include <stdio.h>
#include "main.h"
/**
* print_rev - prints string in reverse
* @s: string to print
*/
void print_rev(char* s)
{
	int l = 0;
	int r = strlen(s) - 1;
	char t;

	while (l < r)
	{
		t = s[l];
		s[l] = s[r];
		s[r] = t;

		l++;
		r--;
	}
	_putchar('\n');
}

#include "main.h"
/**
* print_line - prints line with n 
* @n: number of times line should be printed
*/
void print_line(int n)
{
	int i = '1';

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
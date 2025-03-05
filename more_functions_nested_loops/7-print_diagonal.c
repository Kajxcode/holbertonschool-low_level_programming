#include "main.h"
/**
* print_diagonal - prints a diagonal line
* @n: number of times to print /
* Return: diagonal line
*/
void print_diagonal(int n)
{
	int ro, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ro = 1; <= n; ro++)
		{
			for (sp = 1; sp < co; sp++)
			{
				for (sp = 1; sp < co; sp++)
					_putchar(' ');
				_putchar('\\');
				_purchar('\n');
			}
		}
	}
}

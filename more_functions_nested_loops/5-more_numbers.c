#include 'main.h'
/**
* more_numbers - prints 10 times the numbers from 0-14
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar('1');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
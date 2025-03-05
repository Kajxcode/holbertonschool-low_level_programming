#include "main.h"
#include <stdio.h>
/**
* fizz_buzz - prints 0-100 printing fizz at multiples of 3 and buzz at multiples of 5, finally printing fizzbuzz at multiples of both
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		if ((i % 5) == 0)
			printf("Buzz");
		if ((i % 3) != 0 && (i % 5) != 0)
			printf("%d", i);
		if (i <= 99)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
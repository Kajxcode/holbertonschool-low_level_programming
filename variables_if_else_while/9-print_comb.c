/*
* made by kaj.c
*/
#include <stdio.h>
/**
* main - entry point
*
* Return: always return 0
*/
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

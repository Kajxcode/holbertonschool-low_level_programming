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
	char number, letter;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

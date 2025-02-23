/*
 * made by kaj.c
 */
#include<stdio.h>
int main(void)
/**
 * main - entry point 
 *
 * Return: always return 0
 */
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}
	putchar('\n');
	return (0);
}

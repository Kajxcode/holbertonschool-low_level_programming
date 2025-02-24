/*
 * made by kaj.c
 */
#include<stdio.h>
#include"main.h"
/**
 * print_alphabet - check the code
 *
 * Return: always 0
 */
void print_alphabet(void)
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

/*
* maded by kaj.c
*
*/
#include "main.h"
#include <stdio.h>
/**
* print_last_digit - print last digit of number
* @c: data from usr
* Return: always 0
*/
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}

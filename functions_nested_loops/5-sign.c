/*
* made by kaj.c
*/
#include "main.h"
#include <stdio.h>
/**
* print_sign - prints sign for data
* @n: data from user
* Return: the type of numeric value
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (-1);
	}
}
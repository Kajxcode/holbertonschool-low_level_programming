#include "main.h"

/**
 * print_b - Helper function to print the binary representation
 *           of a number recursively
 * @n: The number to print in binary
 */
void print_b(unsigned long int n)
{
	if (n > 1)
		print_b(n >> 1);

	_putchar((n & 1) + '0');
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to interpret as binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_b(n);
}

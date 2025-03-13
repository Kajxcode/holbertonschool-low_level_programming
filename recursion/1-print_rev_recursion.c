#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: The string to be printed
 */
void print_rev_recursion(char *s)
{
	if (*s == '\0')
			return;

	print_rev_recursion(*s--1)
		_putchar(*s);
}

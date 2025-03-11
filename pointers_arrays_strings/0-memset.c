#include <stdio.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: Ptr to the memory area
 * @b: The constant byte to fill memory with
 * @n: The number of bytes to fill
 * Return: Ptr to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

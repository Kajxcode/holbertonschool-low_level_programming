#include <stdio.h>
/**
* _strncat - concatentates 2 strings
* @dest: string to be appended
* @src: string to be appended to dest
* @n: number of bytes appended to dest
* Return: ptr to dest
*/
char *_strncat(char *dest, char *src, int n);
{
	char *ptr = dest;
	
	while (*ptr)
		ptr++;

	while (*src && n--)
		*ptr++ = src++;

		return (dest);
}

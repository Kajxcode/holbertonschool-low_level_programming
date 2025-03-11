#include <stdio.h>
/**
* _strcat - appends src to dest string
* @dest: dest to append by src
* @src: string to append to dest
* Return: address of dest
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while
		((*ptr++ = *src++));

	return (dest);
}

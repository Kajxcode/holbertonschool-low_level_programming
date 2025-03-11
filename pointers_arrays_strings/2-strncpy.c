#include <stdio.h>
/**
* _strncpy - copies a string
* @dest: stored string
* @src: source to copy string from
* @n: max num of bytes to copy
* Return: ptr to resulting string dest
*/
char* _strncpy(char* dest, char* src, int n)
{
	int;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)

	return (dest);
}

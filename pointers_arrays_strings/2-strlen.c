#include "main.h"
#include <stdio.h>
/**
* _strlen - count length
* @s: data from usr
* Return: length of string
*/
int _strlen(char* s)
{
	int i = 0, length = 0;

	while (s[i++])
	{
		length++;
	}
	return (length);
}

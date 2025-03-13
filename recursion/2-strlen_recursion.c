#include <stdio.h>
/**
* _strlen_recursion - Returns length of string through recursion
* @s: string to be printed
* Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;

	return 1 + _strlen_recursion(s + 1)
}

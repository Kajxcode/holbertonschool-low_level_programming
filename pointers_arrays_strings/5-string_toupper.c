#include <stdio.h>
/**
 * string_toupper - Converts lowercase tro upper
 * @str: Provided string
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}

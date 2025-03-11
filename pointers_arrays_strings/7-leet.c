#include <stdio.h>
/**
 * leet - Encodes a string into leet speak
 * @str: Provided string
 * Return: Ptr to string
 */
char* leet(char* str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}

	return (str)
}

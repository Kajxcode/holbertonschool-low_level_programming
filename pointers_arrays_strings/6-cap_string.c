#include <stdio.h>
/**
 * cap_string - Capitalizes the first letter of each word
 * @str: Provided string
 * Return: Ptr to string
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";


	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i])
	{
		int j;


		for (j = 0; separators[j]; j++)
		{
			if (str[i] == separators[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}

	return (str);
}

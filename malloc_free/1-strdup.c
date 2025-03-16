#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a new string, which is a duplicate of str
 * @str: The source string to duplicate
 * Return: Pointer to duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);


	while (str[len] != '\0')
		len++;


	dup = (char*)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);


	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}

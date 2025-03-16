#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 * Return: Pointer to allocated zero-initialized memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}

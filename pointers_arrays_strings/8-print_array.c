#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements from array
 * @a: int pointer
 * @n: int elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

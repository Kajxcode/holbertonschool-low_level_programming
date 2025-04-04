#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: ptr to array
* @size: num of elements in array
* @cmp: funciton pointer
* Return: int or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}

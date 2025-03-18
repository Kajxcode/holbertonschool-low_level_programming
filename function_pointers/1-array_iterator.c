#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - actions each elemenent in an array with function
* array: pointer to array
* @size: size of the array
* @action: pointer to function
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

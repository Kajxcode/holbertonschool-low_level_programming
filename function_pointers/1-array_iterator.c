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
	if (array == NULL || size == 0)
		return;

	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

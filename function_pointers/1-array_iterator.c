#include <stdio.h>
/**
* array_iterator - actions each elemenent in an array with function
* array: pointer to array
* @size: size of the array
* @action: pointer to function
* Return: nothing
*/

void array_iterator(int* array, size_t size, void (*action)(int))
{
	if (array == NULL || size == 0)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include <stdio.h>
#include "main.h"
/**
* swap_int - swaps value of a and b
* @a: first pointer
* @b: second pointer
*/
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

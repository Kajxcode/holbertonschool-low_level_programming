#include "function_pointers.h"
/**
* print_name - prints a name using function pointer
* @name: the name to printed
* @f: pointer to functionthat takes a char * argument
* Return: nothing
*/
void print_name(char* name, void (*f)(char*))
{
	if (name != NULL && f != NULL)
		f(name);
}
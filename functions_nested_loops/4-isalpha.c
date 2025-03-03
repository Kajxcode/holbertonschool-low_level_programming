/*
* made by kaj.c
*/
#include "main.h"
#include <stdio.h>
/**
* _isalpha - checks case
* @c: data from user
* Return: 1 if uper or lowercase
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

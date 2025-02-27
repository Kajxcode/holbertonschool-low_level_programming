/*
* made by kaj.c
*/
#include "main.h"
#include <stdio.h>
/**
* _islower - checks if lower
* @c: data from user
* Return: if lower print 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
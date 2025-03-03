/*
* made by kaj.c
*/
#include "main.h"
#include <stdio.h>
/**
* _abs - change number to absolute
* @c: data from usr
* Return: always 0
*/
int _abs(int c)
{
	if (c > 0)
		return (c);
	else
		return ((c * -1));
}

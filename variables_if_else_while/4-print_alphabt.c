/*
 * made by kaj.c
 */
#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	char a;

	for (a = 'a'; <= 'z'; a++)
{
	if (a == 'e' || a == 'q')
		continue;
	putchar(a);
}
putchar('\n');
return (0);
}

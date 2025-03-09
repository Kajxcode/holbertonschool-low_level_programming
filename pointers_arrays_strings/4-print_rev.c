#include <stdio.h>
#include "main.h"
/**
* print_rev - prints string in reverse
* @s: string to print
*/
void print_rev(char *s)
{
int index = 0;

while (s[index] != '\0')
{
index++;
}
for (index = index - 1; index >= 0; index--)
{
_putchar(s[index]);
}

_putchar('\n');
}

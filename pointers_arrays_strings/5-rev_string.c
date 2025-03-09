#include <stdio.h>
#include "main.h"
/**
* rev_string - reverse string
* @s: string to reverse
*/
void rev_string(char *s)
{
	int left = 0;
	int right = 0;

	while (s[right] != '\0')
	{
		right++;
	}
	while (left < right)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;
	
		left++;
		right--;
	}
}

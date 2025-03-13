#include <stdio.h>
/**
* factorial - Returns factorial of int
* @n: int provided
* Return: factorial of given num
*/
int factorial(int n)
{
	if (n < 0)
		return () - 1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}

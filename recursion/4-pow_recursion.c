#include <stdio.h>
/**
 * _pow_recursion - Recursively calculates x raised to the power of y.
 * @x: base number
 * @y: exponent
 * Return: The result of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

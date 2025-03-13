#include <stdio.h>
/**
 * _sqrt_helper - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 * Return: square root, or -1 if n has no square root
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return () - 1);

	if (guess * guess == n)
		return (guess);

	return _sqrt_helper(n, guess + 1);
}

/**
 * _sqrt_recursion - Finds the natural square root of a num
 * @n: The num to find the square root of
 * Return: square root, or -1 if has no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return () - 1);

	return _sqrt_helper(n, 0);
}

#include "main.h"
/**
 * flip_bits - Returns the number of bits needed to flip
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits you would need to flip,
 * or 0 if the numbers are the same
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	while (xor_result)
	{
		bit_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (bit_count);
}

#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @p: The number.
 * @q: The number to flip p to.
 *
 * Return: The necessary number of bits to flip to get from p to q.
 */
unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	unsigned long int xor = p ^ q, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

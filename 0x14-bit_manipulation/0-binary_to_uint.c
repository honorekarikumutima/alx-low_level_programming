#include "main.h"

/**
 * binary_to_uint - function that converts binary number to an unsigned int.
 * @b: pointer that containing binary number
 *
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		number <<= 1;
		if (b[index] == '1')
			number += 1;
	}
	return (number);
}


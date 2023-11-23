#include "main.h"

/**
 * _pow - function that prints the binary representation of a number.
 * @base: exponent base
 * @power: exponent power
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int index;

	number = 1;
	for (index = 1; index <= power; index++)
		number *= base;
	return (number);
}

/**
 * print_binary - prints binary number
 * @n: number of prints
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, checker;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		checker = n & div;
		if (checker == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}


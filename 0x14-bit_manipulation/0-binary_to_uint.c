#include "main.h"
/**
 * binary_to_uint - covert from binary to decimal
 * @b: binary value to be converted
 * Return: Allow success
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len_b = 0, dec_val = 0, i = 0, tmp_b, num;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		len_b++;
		i++;
	}
	if (len_b == 0)
		return (0);
	len_b = len_b - 1;
	tmp_b = len_b;
	for (i = 0; i <= len_b; i++)
	{
		if (b[i] == '0')
			num = 0;
		else if (b[i] == '1')
			num = 1;
		dec_val = dec_val + (num << tmp_b);
		tmp_b--;
	}
	return (dec_val);
}

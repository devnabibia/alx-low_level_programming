#include "main.h"
/**
 * binary_to_uint - input
 * @b: declared char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int a = 1, c = 0;

	if (b == NULL)
		return (0);
	while (b[c + 1])
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		c++;
	}
	while (c >= 0)
	{
		i += ((b[c] - '0') * a);
		a *= 2;
		c--;
	}
	return (i);
}

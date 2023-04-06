#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - input
 * @n: integer
 * return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int b = 1ul << 63;
	char c = '0';

	while (!(b & n) && b != 0)
		b = b >> 1;

	if (b == 0)
		write(1, &c, 1);

	while (b)
	{
		if (b & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		b = b >> 1;
	}
}

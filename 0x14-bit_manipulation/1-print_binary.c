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
	unsigned long int p = 1ul << 63;
	char c = '0';

	while (!(p & n) && p != 0)
		p = p >> 1;

	if (p == 0)
		write(1, &c, 1);

	while (p)
	{
		if (p & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		p = p >> 1;
	}
}

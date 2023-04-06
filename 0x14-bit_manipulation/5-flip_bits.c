#include "main.h"
/**
 * flip_bits - entry
 * @n: interger
 * @m: ineterger
 * return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dee = 0, count = 0;

	mask = n ^ m;
	while (dee)
	{
		if (dee & 1)
			count++;

	dee >>= 1;
	}

	return (count);
}
}

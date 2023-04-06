#include "main.h"
/**
 * flip_bits - entry
 * @n: interger
 * @m: ineterger
 * return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int b = 0;

	while (b)
	{
		b += a & 1;
		a >>= 1;
	}
	return (b);
}

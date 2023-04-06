#include "main.h"
/**
 * flip_bits - entry
 * @n: interger
 * @m: ineterger
 * return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int count = 0;

	while (count)
	{
		count += a & 1;
		a >>= 1;
	}
	return (count);
}

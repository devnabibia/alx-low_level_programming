#include "main.h"

/**
 * set_bit - entry point
 * @n:pointer to int
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

x <<= index;
*n |= x;
return (1);
}

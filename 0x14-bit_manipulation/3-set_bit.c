#include "main.h"
/**
 * set_bit - entry
 * @n: input
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 9)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}

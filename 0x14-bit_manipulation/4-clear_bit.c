#include "main.h"
/**
 * clear_bit - entry point
 * @n: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

h <<= index;
*n &= ~h;
return (1);
}

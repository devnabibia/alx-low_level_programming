#include "main.h"
/**
 * get_endianness - entry point
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int x = 1;

	return (*((char *) &x) + '0');
}

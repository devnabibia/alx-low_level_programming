#include "main.h"
/**
 * get_endianness - entry point
 *
 * Return: 0 on success
 */
int get_endianness(void)
{
	int x = 1;

	return (*((char *) &x) + '0');
}

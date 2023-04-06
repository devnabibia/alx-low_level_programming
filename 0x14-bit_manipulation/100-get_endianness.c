#include "main.h"
/**
 * get_endianness - entry
 * return: 0
 */
int get_endianness(void)
{
	int a = 1;

	return (*((char *) &a) + '0');
}

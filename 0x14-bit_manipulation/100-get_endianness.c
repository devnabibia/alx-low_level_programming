#include "main.h"
/**
 * get_endianness - entry
 *
 * return: 0
 */
int get_endianness(void)
{
	int i;
	int x;

	x = (char *)&i;
	return (x + 65);
}

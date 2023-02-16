#include <unistd.h>
/**
 *  main - prints main "and that piece of art is useful"ar, 2015-10-19".
 * followed by a newline ,to standartd eror.
 * Return:always 1.
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

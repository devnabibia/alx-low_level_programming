#include <stio.h>
#include "list.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the list.
 * Return: alwas 0.
 **/
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

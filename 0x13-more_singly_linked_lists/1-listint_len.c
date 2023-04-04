#include "list.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the list.
 * Return: alwas 0.
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}
	return (cont);
}

#include "lists.h"
/**
 * print_listint - prints the elments
 * @h: pointer to n
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
	       h = h->next;
	       count++;
	}
	return (const);
}

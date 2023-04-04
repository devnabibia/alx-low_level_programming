#include "lists.h"
/**
 * print_listint - prints the elments
 * @h: pointer to n
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		const++;
		node = node->next;
	}
	return (const);
}

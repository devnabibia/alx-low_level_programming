#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the listint_t argument (head)
 * @idx: the index to insert the node
 * @n: the int data of the node
 *
 * Return: the new node, or NULL if it doesn't exists
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentnode;
	listint_t *newnode;

	while (*head)
	{
		newnode = malloc(sizeof(listint_t));
		currentnode = *head;
		newnode->n = n;

		if (idx == 0)
		{
			newnode->next = NULL;
			return (newnode);
		}
		while (currentnode->next != NULL && idx - 1 > 0)
		{
			currentnode = currentnode->next;
			idx--;
		}
		if (currentnode->next == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = currentnode->next;
		currentnode->next = newnode;
		return (newnode);
	}
	return (NULL);
}

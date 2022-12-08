#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a doubly-linked list at a
 * given index
 * @head: Address of a pointer pointing to the first node
 * @index: The index of the node to be deleted
 *
 * Return: 1 on success, 0 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int on_index;

	if (head == NULL)
		return (-1);

	for (on_index = 0, node = *head; node != NULL; ++on_index,
			node = node->next)
	{
		if (on_index == index)
		{
			if (node->prev != NULL)
				node->prev->next = node->next;

			if (node->next != NULL)
				node->next->prev = node->prev;

			if (on_index == 0)
				*head = node->next;

			free(node);
			return (1);
		}
	}

	return (-1);
}

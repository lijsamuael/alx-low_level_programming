#include "lists.h"

/**
 * insert_nodeint_at_index - insert a nod at the given position
 * @head: head.
 * @idx: index of the list.
 * @n: integer.
 * Return: nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *node_temporal;

	if (!head && !*head)
		return (NULL);
	node_temporal = *head;
	if (idx == i)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		while (node_temporal)
		{
			if (idx == i + 1)
			{
				node = malloc(sizeof(listint_t));
				if (!node)
					return (NULL);
				node->n = n;
				node->next = node_temporal->next;
				node_temporal->next = node;
				return (node);
			}
			node_temporal = node_temporal->next;
			i++;
		}
	}
	return (NULL);
}

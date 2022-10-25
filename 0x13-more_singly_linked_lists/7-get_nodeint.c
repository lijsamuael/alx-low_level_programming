#include "lists.h"
/**
 * get_nodeint_at_index - reitruns the nth node of the linked list
 * @head: the starting node of the list
 * @index: the index of the node  to be returned
 * Return: the node at the nth index;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	if (temp->next == NULL && index == 0)
	{
		return (temp);
	}
	else
	{
		i = 0;
		while (temp->next != NULL || i != index)
		{
			if (i == index)
				return (temp);
			temp = temp->next;
			i++;
		}
		return (NULL);
	}
}

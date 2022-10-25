#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in pladce
 * @head: Pointer to a pointer pointing to the first item in the list
 *
 * Return: The new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next)
	{
		next = (*head)->next;

		(*head)->next = prev;

		prev = *head;

		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}

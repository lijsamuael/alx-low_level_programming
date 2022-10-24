#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a node the end
 * @head:  the begining of the linked list
 * @n: the number to be addd at the end
 * Return: the adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}


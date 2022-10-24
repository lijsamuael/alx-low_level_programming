#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - tryes to free a liked list.
 * @head: the startof the nodes in the linked list
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

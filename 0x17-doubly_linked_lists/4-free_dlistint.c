#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_dlistint - free memory
 *@head: head list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freememory;

	if (head == NULL)
		return;

	freememory = head->next;

	while (freememory != NULL)
	{
		free(head);
		head = freememory;
		freememory = freememory->next;
	}
	free(head);
}

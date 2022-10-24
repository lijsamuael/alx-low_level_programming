#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a linked list
 * @head: the start node of the linked list
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

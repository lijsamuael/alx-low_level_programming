#include "lists.h"

/**
 * free_list - free all nodes and each strdup.
 * @head: The address of the node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

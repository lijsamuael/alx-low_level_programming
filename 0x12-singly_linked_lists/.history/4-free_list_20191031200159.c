#include "lists.h"

/**
 * free_list - free all nodes and each strdup.
 * @head: The address of the node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}

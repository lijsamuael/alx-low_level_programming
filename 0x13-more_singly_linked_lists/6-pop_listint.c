#include "lists.h"
/**
 * pop_listint - delets the first node of the linked list
 * @head: the first node in the linked list
 * Return: the removed node;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	if ((*head)->next == NULL)
	{
		*head = temp->next;
		i = temp->n;
		free(temp);
		head = NULL;

	}
	else
	{
		*head = temp->next;
		i = temp->n;
		free(temp);
	}
	return (i);

}

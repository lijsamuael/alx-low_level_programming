#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_dlistint - sum data
 *@head: head
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

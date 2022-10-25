#include "lists.h"
/**
 * sum_listint - returns the sum of the elements in the node
 * @head: the starting nod e of the list
 * Return: the sum of the vlues in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	do {
		if (temp == NULL)
			;
		else
		{
			sum += temp->n;
			temp = temp->next;
		}
	} while (temp != NULL);
	return (sum);
}

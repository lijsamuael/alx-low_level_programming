#include "lists.h"

/**
 * find_listint_loop - Finds where a loop starts in a linked list
 * @head: Address of the first node in the list
 *
 * Return: Address of the first node in the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head, *h = head;

	if (!head)
		return (NULL);

	do {
		if (h->next == NULL || h->next->next == NULL)
			return (NULL);

		h = h->next->next;
		t = t->next;
	} while (t != h);

	t = head;

	while (t != h)
	{
		t = t->next;
		h = h->next;
	}

	return (t);
}

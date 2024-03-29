#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the integer in the linked list
 * @h: a pointer to a linked list
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	do {
		if (h == NULL)
			;
		else
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	} while (h != NULL);
	return (count);
}

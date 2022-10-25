#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list containing integers
 * @h: Address of the first item in the list
 *
 * Return: Length of the linked list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		len++;

		if ((void *)h->next >= (void *)h)
		{
			printf("-> [%p] %d\n", (void *)h->next, h->next->n);
			return (len);
		}

		h = h->next;
	}

	return (len);
}

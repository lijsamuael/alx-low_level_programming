#include "lists.h"

/**
 * list_len - print len.
 * @h: list.
 * Return: The elements linked.
 */

size_t list_len(const list_t *h)
{
int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

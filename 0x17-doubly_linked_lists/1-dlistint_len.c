#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - numer of elements
 * @h: head of double list
 * Return: Value
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}


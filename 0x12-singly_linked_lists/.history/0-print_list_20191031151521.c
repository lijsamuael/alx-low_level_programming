#include "lists.h"

/**
 * print_list - print elements of list.
 * @h: input.
 * Return: Element.
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		} i++;
	}
	return (i);
}

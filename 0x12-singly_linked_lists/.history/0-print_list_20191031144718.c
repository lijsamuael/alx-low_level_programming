#include "lists.h"
/**
 * print_list - print elements of list.
 * @h: input.
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
printf("[%d] ", h -> len);
h = h -> next;
i++;
}
return (0);
}

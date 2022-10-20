#include "lists.h"
/**
 * print_list - print elements of list.
 * @h: input.
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{

while (h != NULL)
{
printf("%d - ", h -> len);
h = h -> next;
}
printf("\n");
}

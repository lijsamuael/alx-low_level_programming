#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
list_t *i = h;

while (i! = NULL)
{
printf("%d - ", i -> len);
i = i -> next;
}
printf("\n");
}

#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds node a t the beggineing of ghe function
 * @head: the starting node of the list
 * @n: the number to addied as data on the node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}

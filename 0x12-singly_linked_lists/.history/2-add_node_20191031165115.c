#include "lists.h"

/**
 * add_note - print len.
 * @head: list.
 * @str: string.
 * Return: The elements linked.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
   		{
        	return (NULL);
	    }
    	new->str = strdup(str);
    	new->len = 5;
    	new->next = head;
    	head = newnode;
		free(newnode->str);
    	free(newnode);
    	return (0);
}

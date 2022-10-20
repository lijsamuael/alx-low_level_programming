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
    	newnode->str = strdup(str);
    	newnode->len = _strlen(str);
    	newnode->next = *head;
    	*head = newnode;
		free(newnode->str);
    	free(newnode);
    	return (newnode);
}
/**
 * _strlen - a function that returns the length of a string.
 * @s: input string
 * Return: length of string
 */
int _strlen(char *str)
{
char *contador = s;

	while (*s)
	{
		s++;
	}
return (str - contador);
}

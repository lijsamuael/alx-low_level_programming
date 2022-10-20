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
	if (str != NULL)
		{
			newnode->str = strdup(str);
			newnode->len = _strlen(str);
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		else
		{
			char *zero = "0";
			newnode->str = strdup(zero);
			newnode->len = 0;
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
}
/**
 * _strlen - a function that returns the length of a string.
 * @s: input string
 * Return: length of string
 */
int _strlen(const char *str)
{
int contador = 0;

	while (str[contador] != '\0')
	{
		contador++;
	}
return (contador);
}

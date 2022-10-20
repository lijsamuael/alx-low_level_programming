#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 * @str: input string
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
/**
 * add_node - print len.
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
			free(newnode);
			return (NULL);
		}
		if (str == NULL)
		{
			newnode->str = 0;
			newnode->len = 0;
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		else
		{
			newnode->str = strdup(str);
			if (newnode->str == NULL)
			{
				free(newnode);
				return (NULL);
			}
			newnode->len = _strlen(str);
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		return (NULL);
}

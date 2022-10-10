#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function print the structure to dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: null or diferent
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{}
	new->name = malloc((i + 1) * sizeof(char));

	for (j = 0; owner[j]; j++)
	{}
	new->owner = malloc((j + 1) * sizeof(char));
	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		new->name[i] = name[i];
	}
	new->name[i] = '\0';
	for (j = 0; owner[j]; j++)
	{
	new->owner[j] = owner[j];
	}
	new->owner[j] = '\0';
	new->age = age;
	return (new);
}

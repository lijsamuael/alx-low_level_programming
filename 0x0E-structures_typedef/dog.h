#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - a structure of dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the ownerof the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char);


#endif /* MAIN_H */

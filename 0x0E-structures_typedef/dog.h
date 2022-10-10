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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* MAIN_H */

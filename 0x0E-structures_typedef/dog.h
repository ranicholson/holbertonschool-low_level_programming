#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog struct to hold data on dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Person to whom the dog belongs
 *
 * Description: Structure to hold name, age, and owner of a dog
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
int _putchar(char c);

#endif

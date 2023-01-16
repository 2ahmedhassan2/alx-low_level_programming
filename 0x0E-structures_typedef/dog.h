#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog function
 * This struct stores information about a dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return
 */
struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

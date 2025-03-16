#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs
 * @name: pointer to string
 * @age : age is non int
 * @owner: pointer to string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* DOG_H */

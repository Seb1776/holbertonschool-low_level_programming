#ifndef DJANGO
#define DJANGO
/**
 * struct dog - Dog information.
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DJANGO */

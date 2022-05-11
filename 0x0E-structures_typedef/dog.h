#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - a dog's basic info.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member
 *
 * Description: Longer description of a dog's info that stors its name and its age and the name of the owner.
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
char *strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

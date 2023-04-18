#ifndef DEV_H
#define DEV_H

/**
 * struct dog - a dog's basic info
 * @name: First namb
 * dog_type - typedef for struct dog
 * @age: Second memb
 * @owner: Third memb
 * Description: Longer description
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_type;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_type *new_dog(char *name, float age, char *owner);
void free_dog(dog_type *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

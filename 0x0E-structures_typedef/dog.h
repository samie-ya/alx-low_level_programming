#ifndef DOG_H
#define DOG_H
/**
* struct dog- creating a structure with name dog
*
* @name: name record
*
* @age: age record
*
* @owner: owner record
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif

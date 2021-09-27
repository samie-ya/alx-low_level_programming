#include "dog.h"
#include <stdlib.h>
/**
* new_dog- function created
*
* @name: name record
*
* @age: age record
*
* @owner: owner record
*
* Return: if success to pointer
*         if failure then 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *user;
user = malloc(sizeof(dog_t));
if (user == 0)
{
return (0);
free(user);
}
name = name;
user->age = age;
owner = owner;
return (user);
}

#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
if (name == 0 || age < 0 || owner == 0)
{
return (0);
}
user = malloc(sizeof(dog_t));
if (user == 0)
{
return (0);
}
user->name = malloc(sizeof(char) * (strlen(name) + 1));
if (user->name == 0)
{
return (0);
free(user);
}
user->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (user->owner == 0)
{
return (0);
free(user->name);
fre(user);
}
user->name = strcpy(user->name, name);
user->age = age;
user->owner = strcpy(user->owner, owner);
return (user);
}

#include "dog.h"
#include <stdlib.h>
/**
* _strlen- determine the length of a string
*
* @s: string used
*
* Return: length of string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* _strcpy- copies string from source to destination
*
* @dest: destination to be copied on
*
* @src: the source to copy from
*
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
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
user->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (user->name == 0)
{
free(user);
return (0);
}
user->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (user->owner == 0)
{
free(user->name);
free(user);
return (0);
}
user->name = _strcpy(user->name, name);
user->age = age;
user->owner = _strcpy(user->owner, owner);
return (user);
}

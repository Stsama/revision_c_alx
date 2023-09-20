#include <stdlib.h>
#include<stdio.h>
#include"dog.h"
/**
 * function that creates a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (dog == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

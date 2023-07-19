#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to the name string of the dog
 * @age: Age value of the dog
 * @owner: Pointer to the owner string of the dog
 *
 * Return: Pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy, *ownerCopy;
	int nameLen, ownerLen;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	return (NULL);

	nameLen = strlen(name) + 1;
	ownerLen = strlen(owner) + 1;

	nameCopy = malloc(nameLen);
	ownerCopy = malloc(ownerLen);
	if (nameCopy == NULL || ownerCopy == NULL)
	{
	free(nameCopy);
	free(ownerCopy);
	free(newDog);
	return (NULL);
	}

	strncpy(nameCopy, name, nameLen);
	strncpy(ownerCopy, owner, ownerLen);

	newDog->name = nameCopy;
	newDog->age = age;
	newDog->owner = ownerCopy;

	return (newDog);
}

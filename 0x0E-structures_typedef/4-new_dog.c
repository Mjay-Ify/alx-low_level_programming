#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initilize new dog structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Ownerof the dog
 * Return: returns a pointer else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kat_dog;
	char *robname, *robowner;
	int l_name = 0, l_owner = 0, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[l_name])
		l_name++;
	while (owner[l_owner])
		l_owner++;

	kat_dog = malloc(sizeof(dog_t));
	if (kat_dog == NULL)
		return (NULL);

	robname = malloc(l_name + 1);
	if (robname == NULL)
		return (NULL);
	for (j = 0; name[j]; j++)
		robname[j] = name[j];
	robname[j] = '\0';

	robowner = malloc(l_owner + 1);
	if (robowner == NULL)
		return (NULL);
	for (j = 0; owner[j]; j++)
		robowner[j] = owner[j];
	robowner[j] = '\0';

	kat_dog->name = robname;
	kat_dog->age = age;
	kat_dog->owner = robowner;
	return (kat_dog);
}


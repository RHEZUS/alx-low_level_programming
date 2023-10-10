#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog
 * @age: the age
 * @owner: the owner of the dog
 * Return: the dogs
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, nl = 0, ol = 0;
	dog_t *newDog;
	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = (dog_t *) malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	while (name[nl] != '\0')
		nl++;
	newDog->name = malloc(nl * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < nl; i++)
		newDog->name[i] = name[i];

	newDog->age = age;

	while (name[ol] != '\0')
		ol++;
	newDog->owner = malloc(ol * sizeof(char));

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		newDog->owner[i] = owner[i];
	
	return (newDog);
}

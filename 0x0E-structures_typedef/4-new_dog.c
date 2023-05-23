#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns new string
 * @s: string to be returned
 * Return: the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
}

/**
 * _strcpy - copies source string
 * @dest: destination 
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return(dest);
}

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: pointer to new dog (success) else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len 1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog - malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 +1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
}

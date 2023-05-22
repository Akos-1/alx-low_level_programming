#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * _strlen - length of a string is returned
 * @s: inputed string
 * Return: string's length
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
/**
 * _strcpy - duplicated string pointed by src
 * @dest: pointer to buffer in which string is duplicated
 * @src: string to be duplicated
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
/**
 * new_dog - make a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog (Success), NULL if otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

#include "main.h"

/**
 * _strcpy - function that copies the string
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */

char *_strcpy(cgar *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + 1) = '\0';
	return (dest);
}

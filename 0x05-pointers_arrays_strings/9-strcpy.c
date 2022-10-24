#include "main.h"

/**
 * _strcpy - copies string pointed by scr
 * @src: source
 * @dest: destination
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int leng = 0;

	while (*(src + leng) != '\0')
	{
		*(dest + leng) = *(src + leng);
		leng++;
	}

	*(dest + leng) = '\0';
	return (dest);
}

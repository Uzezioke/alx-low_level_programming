#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

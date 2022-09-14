#include "main.h"
/**
 * _islower - Checks for lower case
 * @c: char type letter
 * Return: 1 if lowercase, 0 if mot lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

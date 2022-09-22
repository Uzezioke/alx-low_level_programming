#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int i, c;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			trigger = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == s[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				trigger = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				trigger = 0;
			else if (s[i] > 47 && s[i] < 58)
				trigger = 0;
		}
	}
	return (s);
}

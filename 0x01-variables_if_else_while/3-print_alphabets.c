#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 * Return : nothing
 */

int main(void)
{

char pass[13];
int i;

char capLetter = 'A' + (rand() % 26);
char letter = 'a' + (rand() % 26);


srand((unsigned int)time(NULL));

for (i = 0; i < 4; i++)
{

pass[3 * i] = '0' + (rand() % 10);

pass[(3 * i) + 1] = capLetter;


}
pass[3 * i] = '\0';
printf("generated password : %s\n\n", pass);

printf("\n\n");

return (0);
}

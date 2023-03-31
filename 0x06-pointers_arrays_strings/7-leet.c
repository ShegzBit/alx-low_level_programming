#include "main.h"

/**
 * leet - encrypt a string
 * @s: string to be encrypted
 *
 * Return: the encryted string;
 */
char *leet(char *s)
{
int i, j;

char *take = "aAeEoOtTlL";
char *give = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == take[j])
{
s[i] = give[j];
}
}
}

return (s);
}

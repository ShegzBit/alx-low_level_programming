#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concats args passed to a string
 * @ac : arg count
 * @av : arg vector
 * Return: pointer to string of args
 */
char *argstostr(int ac, char **av)
{
char *newPtr;
int v, j, h, l = 0;
unsigned int k;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (v = 0; v < ac; v++)
{
h += strlen(av[v]) + 1;
}
newPtr = (char *)malloc(v *sizeof(**av));
for (j = 0; j < ac; j++)
{
for (k = 0; k < strlen(av[j]); k++)
{
l++;
newPtr[l] = av[j][k];
}
newPtr[l] = '\n';
l++;
}
return (newPtr);
}

#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1 : first string
 * @s2 : second string
 * Return: number for character
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, k = 0;
/*i length of s1*/
while (s1[i])
{
i++;
}
 /*j length of s2*/
while (s2[j])
{
j++;
}
if (i < j)
{
return (-15);
}
else if (j < i)
{
return (15);
}
else if (i == j)
{
while (k < j && k < i)
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
break;
}
else
{
k++;
continue;
}

}
}
return (0);

}

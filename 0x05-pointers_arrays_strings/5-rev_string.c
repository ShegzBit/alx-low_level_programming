#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s : string to reverse
 */

void rev_string(char *s)
{
int i;
char tmp;
int j;
int len;
for (i = 0; s[i] != '\0'; i++)
{
}
len = i - 1;
for (j = 0; j < i / 2; j++, len--)
{
tmp = s[j];
s[j] = s[len];
s[len] = tmp;
}
}


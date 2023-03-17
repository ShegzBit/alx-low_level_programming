#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char alpha, alphaU;
char itr, itrU;
alpha = 'a';
while (i < 26)
{
itr = alpha + i;
putchar(itr);
i++;
}
i = 0;
alphaU = 'A';
while (i < 26)
{
itrU = alphaU + i;
putchar(itrU);
i++;
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char alpha;
char itr;
alpha = 'a';
while (i < 26)
{
itr = alpha + i;
putchar(itr);
i++;
}
return (0);
}

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
if (itr == 113 || itr == 101)
{
i++;
continue;
}
else
{
putchar(itr);
}
i++;
}
putchar('\n')
return (0);
}

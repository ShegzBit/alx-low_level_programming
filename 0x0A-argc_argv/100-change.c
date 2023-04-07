#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints number of coins needed for change
 * @argc : argument count
 * @argv : argument array
 * Return: 0 oon success 1 on error
 */

int main(int argc, char **argv)
{
int cents = 0;
int change;
if (argc == 2)
{
change = atoi(argv[1]);
while (change > 0)
{
if (change >= 25)
{
change -= 25;
}
else if (change >= 10 && change < 25)
{
change -= 10;
}
else if (change >= 5 && change < 10)
{
change -= 5;
}
else if (change >= 2 && change < 5)
{
change -= 2;
}
else if (change >= 1 && change < 2)
{
change -= 1;
}
cents++;
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", cents);
return (0);
}

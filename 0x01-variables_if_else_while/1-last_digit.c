#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int value = n % 10;
printf("%d\n", value);
if (value > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, value);
}
else if (value == 0)
{
printf("Last digit of %d is %d and is 0", n, value);
}
else if (value < 6 && value != 0)
{
printf("Last digit of %d is %d and is less than 6 and not zero", n, value);
}
return (0);
}

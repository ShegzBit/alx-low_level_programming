#include <stdio.h>
#include "main.h"

/**
 *_isdigit - checks if char is digit
 *
 *@c : variable to test
 *
 *Return: 1 if is digit 0 if !(digit)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

#include "main.h"

/**
 * _isalpha - checks if a char variable is alphabet
 * @c : variable to test
 * Return: 1 is alpha 0 not alpha
 */
int _isalpha(int c)
{
return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

/**
 * _pow_recursion - returns x to the power y
 * @x : number to exponent
 * @y : number of time to exponent x
 * Return: x exponential y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}

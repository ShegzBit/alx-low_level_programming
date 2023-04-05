/**
 * _sqrt_recursion_helper - helps the function
 * @n : number
 * @p : second number
 * Return: result
 */

int _sqrt_recursion_helper(int n, int p)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n < p * p)
return (p - 1);
return (_sqrt_recursion_helper(n, p + 1));
}

/**
 * _sqrt_recursion - helps the function
 * @n : number
 * Return: result
 */
int _sqrt_recursion(int n)
{
return (_sqrt_recursion_helper(n, 1));
}

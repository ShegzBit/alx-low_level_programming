/**
 * is_prime_helper - helps is prime number
 * @n : n
 * @i : i
 * Return: integer
 */

int is_prime_helper(int n, int i)
{
if (n <= 1)
return (0);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime or !
 * @n : number to check
 * Return: 1 for true and 0 for false
 */

int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}

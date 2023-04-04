/**
 * _strpbrk - returns the first char in s and also in accept
 * @s : string to be checked through
 * @accept : string containing characters to search for
 * Return: returns the first char in s and also in accept
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
return (s + i);
}
}
}
return (NULL);
}

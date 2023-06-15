#include "main.h"

/**
 * string_nconcat - concats n number of string to s1 from s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concat
 * Return: concatenated str
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/**
	 * if alloc fail return null
	 * if n >= s2 lenght n = s2 length
	 * if s1 or s2 is null then s1 or s2 = ""
	 * cpy s1 and s2 into str
	 * return str
	*/
	unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len2 = (s1 == NULL) ? 0 : strlen(s2), size;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;
	size = len1 + len2 + 1;
	ret = malloc(size);
	strcpy(ret, s1);
	strncat(ret, s2, n);

	ret[size - 1] = '\0';
	return (ret);
}

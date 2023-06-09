#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: The first string
 * @s2: The second string which can contain the special character *.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = strlen(s1) - 1;
	int len2 = strlen(s2) - 1;

 /* Base condition */
 if (*s1 == '\0' && *s2 == '\0')
  return (1);

 /*  main.c .... *.c */

 /* s1[1] = m */  /*s2[1] = * */
 /* s1[2] = a*/  /*s2[1] = * */
	/* s1[3] = i*/  /*s2[1] = * */
	/* s1[4] = n*/  /*s2[1] = * */
	/* s1[5] = .*/  /*s2[2] = . */
	/**/

if (*s1 == *s2 || (*s1 && *s2 == '*'))
		{
			if (*(s1 + len1) == *(s2 + len2) || (*(s1 + len1) && *(s2 + len2)  == '*'))
			{
				return (1);
			}
			else{
				return (0);
			}

		}
	

 

 

 if (*s1 == *s2)
		{
  			return (wildcmp(s1 + 1, s2 + 1));
		}

 if (*s1 && *s2 == '*')
	{
			if((*(s1 + 1) == *(s2 + 1)))
		{
			return(wildcmp(s1 + 1, s2 + 1));
		}

		else
		{
  			return (wildcmp(s1 + 1, s2));
		}
	}

return (0);
}

/*if (*s1 && *s2 == '*' && *(s1 + 1) == *(s2 + 1))
  return (wildcmp(s1 + 1, s2 + 1));*/

		/*main.c  *.c */


		/* s1 = main.c    s2 = *.c */
		/**
			* let len1 = size of s1 - 1, len2 = size of s2 - 1
			* if s1[0] == s[0] or (s1[0] and s2[0] == *):
			*				if s1[len1] == s2[ len2] or (s1[len] and s2[len] == *):
			*								return (1)
			*				else:
			*							return(0)
		*/


		
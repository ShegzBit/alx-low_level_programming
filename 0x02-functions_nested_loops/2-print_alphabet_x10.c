#include <stdio.h>
/*print_ alphabet - prints the English alphabet in lowercase */
/**
 * print_alphabet_x10 - Short description, single line
(* a blank line
* Description: pritns the alphabet in lower case 10x)?
(* section header: Section description)*
* Return: Void
*/
void print_alphabet_x10(void)
{
int a = 0;
for (a = 0; a < 10; a++)
{
int i = 0;
for (i = 0; i < 26; i++)
{
putchar('a' + i);
}
putchar('\n');
}
}

#include<stdio.h>
/*print_ alphabet - prints the English alphabet in lower case */
/**
 * print_alphabet - Short description, single line
(* a blank line
* Description: pritns the alphabet in lower case)?
(* section header: Section description)*
* Return: Void
*/
void print_alphabet(void)
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

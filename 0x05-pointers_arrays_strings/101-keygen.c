#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - generates a random password string
 *
 * Returns: zero on success
 */
#define passLen 10
int main(void)
{
int i;
char *pW = malloc(passLen + 1);
memset(pW, 0, passLen);
srand(time(0));
for (i = 0; i < passLen; i++)
{
pW [i] = rand() % 94 + 33;
}
printf("%s\n", pW);
return (0);
}

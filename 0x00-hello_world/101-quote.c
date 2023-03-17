#include <unistd.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
const char message[] = "and that piece of art is useful\"-Dora Korpar, 2015-10-19\n";

const int length = sizeof(message) - 1;
write(2, message, length);
return (1);
}


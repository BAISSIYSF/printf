#include "main.h"

/**
 * yt_putchar - prints one character.
 *
 * @c: the character.
 *
 * Return: int 1.
 */
int yt_putchar(char c)
{
write(1, &c, 1);
return (1);
}

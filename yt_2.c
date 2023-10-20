#include "main.h"
/**
 * yt_print_int - print an intiger.
 *
 * @i: the number.
 *
 * Return: the number of characters printed.
 */
int yt_print_int(int i)
{
int count = 0;
int k;
if (i == 0)
{
yt_putchar('0');
return (1);
}
if (i < 0)
{
yt_putchar('-');
i *= -1;
count++;
}
k = i % 10;
if (i / 10 != 0)
{
count += yt_print_int((i / 10));
}
yt_putchar((k + 48));
count++;
return (count);
}

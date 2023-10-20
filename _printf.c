#include "main.h"
/**
 * _printf - prints formated strings.
 *
 * @format: the format specifier character.
 * @...: list of objects to fill in the string.
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
int count = 0;
char ch;
va_list args;
va_start(args, format);
while ((ch = *format++) != '\0')
{
if (ch != '%')
{
yt_putchar(ch);
count++;
continue;
}
ch = *format++;
switch (ch)
{
case 'c':
yt_putchar(va_arg(args, int));
count++;
break;
case 's':
count += _printf(va_arg(args, char *));
break;
case '%':
yt_putchar('%');
count++;
break;
case 'd':
case 'i':
count += yt_print_int(va_arg(args, int));
break;
default:
yt_putchar('%');
yt_putchar(ch);
count += 2;
break;
}
}
va_end(args);
return (count);
}

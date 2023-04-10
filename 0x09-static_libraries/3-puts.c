#include "main.h"
/**
 * _puts - write a long character
 * @s: long character
 * _putchar: function that writes character by character
 */
void _puts(char *s)
{
while (*s)
{
_putchar(*s++);
}
_putchar('\n');
}

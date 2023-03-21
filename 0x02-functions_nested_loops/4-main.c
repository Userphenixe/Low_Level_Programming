#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _isalphat('H');
_putchar(r + '0');
r = _isalphat('o');
_putchar(r + '0');
r = _isalphat(108);
_putchar(r + '0');
r = _isalphat(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
	char alp[i] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (i != 5 && i != 17)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}

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
	int a;

	for (a = 1; a <= 25; a++)
	{
		if (a != 5 && a != 16)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}

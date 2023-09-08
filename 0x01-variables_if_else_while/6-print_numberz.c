#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numberz[10] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(numberz[i]);
	}
	putchar('\n');
	return (0);
}

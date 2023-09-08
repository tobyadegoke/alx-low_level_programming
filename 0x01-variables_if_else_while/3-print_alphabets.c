#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(letters[a]);
	}
	putchar('\n');
	return (0);
}

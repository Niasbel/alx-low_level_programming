#include <stdio.h>
/**
 * main - prints the alphabet in lowercase , fiollowed by a new line
 * Return: 0. on success
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	{
		putchar('\n');
	}
	return (0);
}

#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * and then in uppercase followed by newline
 * Return: 0.
 */
int main(void)
{
	char B, C;

	for (B = 'a'; B <= 'z'; B++)
	{
		putchar(B);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}

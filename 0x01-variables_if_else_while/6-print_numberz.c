#include <stdio.h>
/**
 * main - prints single digits in base 10
 * followed by a new line
 * Return: 0.
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

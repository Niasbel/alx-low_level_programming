#include <stdio.h>
/**
 * main - prints the alphabets
 * in lowercase followed by newline except q and e
 * Return: 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

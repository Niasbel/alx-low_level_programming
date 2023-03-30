#include <stdio.h>
/**
 * main - main function
 *
 * Return: (0) on success
 */
int main(void)
{
	printf("size of a char: %zu byte(s)", sizeof(char));
	printf("size of int: %zu byte(s)", sizeof(int));
	printf("size of a long int: %zu byte(s)", sizeof(long long int));
	printf("size of float: %zu byte(s)", sizeof(float));
	return (0);
}

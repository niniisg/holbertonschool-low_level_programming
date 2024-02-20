#include<stdio.h>
/**
 * main -print the size using sizeof
 * return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %Lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(S)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}

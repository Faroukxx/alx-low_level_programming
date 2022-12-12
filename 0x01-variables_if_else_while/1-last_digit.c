#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last < 5)
{
	printf("Last digit of %d is %d", n, last);
}
	return (0);
}

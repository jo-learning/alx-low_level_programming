#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints value
 * Description: greater than 5, zero or less than 6
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
	int m;
	m = n%10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (n == 0)
		printf("Last digit of %d is %d and  is 0", n, m);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
        return (0);
}

#include <stdio.h>

/**
 * main - print sum of multiple of 3 or 5
 * Return: 0
 */

int main(void)
{
	int n;
	int sum;

	sum = 0;

gfor (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
			

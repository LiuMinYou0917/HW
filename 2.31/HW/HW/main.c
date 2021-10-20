#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	printf("number\tsquare\tcube\n");
	for (n = 0; n <= 10; n++)
	{
		printf("%d\t%d\t%d\n", n, n*n, n*n*n);
	}
}
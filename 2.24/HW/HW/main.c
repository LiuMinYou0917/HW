#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("Enter an integer\n");
	scanf_s("%d", &num);

	if ((num % 2) == 0)
		printf("the integer is even");
	else
		printf("the integer is odd");
}
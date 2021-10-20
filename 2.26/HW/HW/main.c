#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("Enter two integer\n");
	scanf_s("%d%d", &num1, &num2);

	if (num2 / num1 == 0)
	{
		printf("the first is multiple of the second");
	}
	else
	{
		printf("the first is not multiple of the second");
	}
}
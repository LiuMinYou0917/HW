#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int max;
	int min;

	printf("Enter three integers\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		if (num2 >= num3)
		{
			max = num1;
			min = num3;
		}
		else
		{
			max = num1;
			min = num2;
		}
	}

	if (num2 >= num1 && num2 >= num3)
	{
		if (num1 >= num3)
		{
			max = num2;
			min = num3;
		}
		else
		{
			max = num2;
			min = num1;
		}
	}

	if (num3 >= num1 && num3 >= num2)
	{
		if (num2 >= num1)
		{
			num3 = max;
			num1 = min;
		}
		else
		{
			max = num3;
			min = num2;
		}
	}
	if (max == min)
		printf("three integers are the same = %d",max); 
	else
		printf("the largest is %d , the smallest is %d",max, min);
}
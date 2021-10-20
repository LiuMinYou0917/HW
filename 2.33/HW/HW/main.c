#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mile; 
	float gas; 
	float average; 
	float parking;
	float tolls;
	float total;

	printf("Enter total miles driven per day\n");
	scanf_s("%f", &mile);
	printf("Enter cost per gallon of gasoline\n");
	scanf_s("%f", &gas);
	printf("Enter average miles per gallon\n");
	scanf_s("%f", &average);
	printf("Enter parking fees per day\n");
	scanf_s("%f", &parking);
	printf("Enter tolls per day\n");
	scanf_s("%f", &tolls);

	total = (mile / average) * gas + parking + tolls;

	printf("the user's cost per day of driving to work: %f", total);
}
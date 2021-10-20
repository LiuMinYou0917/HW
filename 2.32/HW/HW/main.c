#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight;
	float height;
	float BMI;

	printf("Enter your weight\n");
	scanf_s("%f", &weight);
	printf("Enter your height\n");
	scanf_s("%f", &height);

	height /= 100;
	BMI = weight / (height * height);

	printf("BMI %f\n", BMI);
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
}
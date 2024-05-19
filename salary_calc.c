#include <stdio.h>

int main(void)
{
	float bp, da, hra, grpay;
	printf("\nEnter Basic Salary of Ramesh: ");
	scanf("%f", &bp);
	da = 0.4 * bp;
	hra = 0.2 * bp;
	grpay = bp + da +hra;
	printf("Basic Salary of Ramesh = %f0.2\n", bp);
	printf("Dearness Allowance = %f0.2\n", da);
	printf("House Rent Allowance = %f0.2\n", hra);
	printf("Gross Pa of Ramesh is %f0.2\n", grpay);
}

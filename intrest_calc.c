#include <stdio.h>

int main(void)
{
	int p,n;
	float r,si;
	printf("Enter values of p, n, r");
	scanf("%d%d%f", &p, &n, &r);
	si = p * n * r / 100;
	printf("%0.2f\n", si);
}

#include <stdio.h>
int findMax()
{
	int x;
	int y;
	printf("Enter the First value: \n");
	scanf("%d",&x);
	printf("Enter the Second value: \n");
	scanf("%d", &y);
	return (x > y) ? x : y;
}
int main()
{
	int max = findMax();
	printf("%d", max);
}


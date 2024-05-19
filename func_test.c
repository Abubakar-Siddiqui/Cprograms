#include <stdio.h>

void birthday(char name[],int age)
{
	printf("\nHappy Birthday to %s!", name);
	printf("\nYou are %d yeard old!", age);
}
int main(void)
{
	char name[] = "kami";
	int age = 19;
	birthday(name, age);
}	

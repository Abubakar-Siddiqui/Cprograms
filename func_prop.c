#include <stdio.h>

// This is a Function Prototype
void hello(char[], int);

int main()
{
	char name[] = "Kami";
	int age = 19;

	hello(name, age);

	return 0;
}
 
void hello(char name[],int age)
{
	printf("\nHello %s", name);
	printf("\nYou are %d years old", age);
}


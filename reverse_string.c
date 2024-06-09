#include <stdio.h>

int main()
{
	char str[20];
	char c;
	int len = 0;


	printf("\nPut the string to be reversed \n");
	scanf("%s", str);

	while(str[len] != '\0')
	{
		len++;
	}
	
	char temp[len];
	int j = len;

	for(int i = 0; i < j ; i++)
	{
		len--;
		c = str[len];
		temp[i] = c;

	}
	printf("This is reversed value: %s", temp);
}

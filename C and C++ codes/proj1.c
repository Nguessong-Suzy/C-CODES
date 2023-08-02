#include<stdio.h>
int main()
{
	int i = 0;
	char mystring[100];
	printf("enter the string\n");
	scanf("%[^\n]", mystring);
	while(mystring[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
	return 0;
}

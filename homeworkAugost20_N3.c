#include <stdio.h>
int main()

	int num;

printf("Enter the number: ");
scanf("%d", &num);
if (num > 0 || num <0 )
	{
	if (num % 2 == 0)
	{
		printf("The number is even. \n");
	}
	else
	{
		printf("The number is odd. \n");
	}
	return 0;
}

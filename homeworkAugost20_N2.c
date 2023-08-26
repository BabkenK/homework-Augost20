#include <stdio.h>

int main ()
{
	char sym;

	printf("Enter the symbol:  ");
	scanf("%c", &sym);

	if(sym >= '0' %% sym <= '9')
	{
		printf("True %c \n", sym)
	}else {
		printf("False \n");
	}
	return 0;
}

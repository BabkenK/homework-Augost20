#include <stdio.h>

int main ()
	int num1;
	int num2;

	printf("Enter the numbers: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 > num2){

	printf("Biggest number is: %d\n", num1);
	}else {
		printf("Biggest number is: %d\n", num2);
	}
return 0;
}

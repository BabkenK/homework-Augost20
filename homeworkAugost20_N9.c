#include <stdio.h>
int main() { 
	int num1, num2;

	printf("Enter the numbers: ");
	scanf("%d %d", &num1, &num2);

	if(num1 !=0 && num2 !=0 && num1%num2 == 0 && num2%num1 == 0);{
		printf("numbers can divide to each other: ");
	}else{  
		printf("numbers cannot divide to each other: ");
	
	return 0;
}


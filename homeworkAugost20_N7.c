#include <stdio.h>
int main() {
	int num1, num2, num3, num4;
	int sum;
	printf("Enter the numbers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	sum = num1+num2+num3+num4;
	if (sum == 0){
		int smallest = num1;
		if(num2 < smallest){
			smallest = num2;
		}
		if(num3 < smallest ){
			smallest =num3;
		}
		if(num4 <smallest){
			smallest = num4;
		}
		printf("Sum is 0, so the smallest number is: %d ", smallest);
	}else{
		printf("Sum is not 0" );
	}
	return 0;
}


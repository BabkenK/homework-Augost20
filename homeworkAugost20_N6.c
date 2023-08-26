#include <stdio.h>
int main()
	int num1, num2, num3;

	printf("Enter the numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num2 == num3){
		printf("Biggest number is : %d\n", num1);
	}else if(num2 > num1 && num1 ==num3){
		printf("Biggest number is: %d\n", num2);
	}else{
		printf("Biggest number is %d\n", num3);
	}
return 0;
}


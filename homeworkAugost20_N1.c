#include <stdio.h>

int main(){
	char sym;

	printf("Enter upper letter: ");
	scanf("%c",&sym);

	if(sym >='A' && sym <='Z'){
		char lower = sym + ('a' - 'A');
		printf("The lower one is: %c", lower);
	}else{
		printf("wrong imput: ");
	}
	return 0;
}

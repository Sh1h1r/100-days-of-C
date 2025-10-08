#include <stdio.h>
int main (){
	int number;
	printf("enter a number:");
	scanf("%d", &number);
	while (number){
		int digit = number % 10;
		printf("%d", digit);
		number = number / 10;
	}
	printf("\n");
	return 0;
}

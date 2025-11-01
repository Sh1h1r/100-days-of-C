#include <stdio.h>
int main(){
	int number,sum = 0, digit;
	printf("enter a number:");
	scanf("%d", &number);
	while(number){
		digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	}
	printf("the sum is: %d\n", sum);
	return 0;
}

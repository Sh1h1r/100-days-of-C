#include <stdio.h>
int main(){
	int number,digit, product = 1;
	printf("enter a number:");
	scanf("%d", &number);
	while(number){
		digit = number % 10;
		if ( digit % 2 != 0){
			product = digit * product;
		}
		number = number / 10;
	}
	printf("the product is: %d\n", product);
	return 0;
}

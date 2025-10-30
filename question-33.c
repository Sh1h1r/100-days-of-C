#include <stdio.h>
int power(int digit,int i){
	int result = 1;
	for (int p = 0; p < i; p++){
		result = digit * result;
	}
	return result;
}
int main(){
	int number,i = 0,sum = 0,digit,length;
	printf("enter a number:");
	scanf("%d",&number);
	length = number;
	int original = number;
	while(length){
		length = length / 10;
		i = i + 1;
	}
	while(number){
	    digit = number % 10;
		sum += power(digit,i);
		number = number / 10;
	}
	if ( sum == original ){
		printf("the number is an amstrong number\n");
	}
	else {
		printf("the number is not an amstrong number\n");
	}
}

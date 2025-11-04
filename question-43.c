#include <stdio.h>
int power(int number,int pow){
 	int temp;
	temp = number;
	for(int num = 1; num < pow; num++){
		temp = number * temp;
	}
	return temp;
}
int main(){
	int number,i = 0,sum = 0,digit,number_dup,original;
	printf("enter a number:");
	scanf("%d",&number);
	number_dup = number;
	original = number;
	while(number_dup){
		i++;
		number_dup = number_dup / 10;
	}
	while(number){
		digit = number % 10;
		sum += power(digit,i);
		number = number / 10;
	}
	if( sum == original ){
		printf("the number is an amstrong number\n");
	}
	else{
		printf("the number is not an amstrong number\n");
	}
	return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
	int number,flag = 1;
	printf("enter a number:");
	scanf("%d",&number);
	if ( number == 1 || number == 2){
			printf("the number is prime\n");
		}
	double square_root = sqrt(number);
	int square_root_int = square_root;
	for(int i = 2; i <= square_root_int; i++){
		if ( number % i == 0 ){
			flag = 0;
			printf("the number is not a prime number\n");
			break;
		}
	}
	if ( flag == 1 ){
		printf("the number is prime\n");
	}
	return 0;
}

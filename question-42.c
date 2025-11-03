#include <stdio.h>
int main(){
	int number, mid, flag = 0;
	printf("enter number:");
	scanf("%d", &number);
	mid = number / 2;
	for( int x = 1; x <= mid; x++){
		if( x * x == number ){
			printf("the number is a perfect square!\n");
			flag = 1;
			break;
		}
	}
	if( flag == 0){
		printf("the number is not a perfect number\n");
	}
	return 0;
}

#include <stdio.h>
int main(){
	int number;
	printf("enter a number:");
	scanf("%d", &number);
	for(int i = 1; i <= number; i++){
		for(int j = 1; j <= number; j++ ){
			if( i * j == number){
				printf("the factors are : %d\n", i);
			}
		}
	}
	return 0;
}

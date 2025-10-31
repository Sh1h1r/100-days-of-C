#include <stdio.h>
int main(){
	int number, number_2;
	printf("enter a number 1:");
	scanf("%d", &number);
	printf("enter a number 2:");
	scanf("%d", &number_2);
	for(int i = 1; i <= number; i++){
		for(int j = 1; j <= number; j++ ){
			if( i * j == number){
				for(int k = 1; k <= number_2; k++){
						for(int l = 1; l <= number_2; l++ ){
							if( k * l == number_2 ){
								if( k == i ){
									printf("the highest common factors are:%d\n", k);
								}
							}
					}
				}
			}
		}
	}
	return 0;
}

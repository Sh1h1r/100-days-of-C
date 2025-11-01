#include <stdio.h>
int main(){
	int number1, number2, hcf;
	printf("enter number 1:");
	scanf("%d", &number1);
	printf("enter number 2:");
	scanf("%d", &number2);
	for(int i = 1; i <= number1; i++){
		for(int j = 1; j <= number1; j++){
			if( i * j == number1 ){
				for(int k = 1; k <= number2; k++){
					for(int l = 1; l <= number2; l++){
						if( k * l == number2 ){
							if( k == i ){
								hcf = k;
							}
						}
					}
				}
			}
		}
	}
	printf("the highest common factor is: %d\n", hcf);
	return 0;
}

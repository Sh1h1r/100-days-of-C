#include <stdio.h>
int main(){
	for( int row = 0; row < 3; row++){
		int stars = 1 + 2 * row;
		for( int col = 0; col < stars; col++){
			printf("*");
			printf("\n");
		}
		printf("\n");
	}
	for( int row = 1; row >= 0; row--){
		int stars = 1 + 2 * row;
		for (int col = 1; col <= stars; col++){
			printf("*");
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

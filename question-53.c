#include <stdio.h>
/*
*
***
*****
*******
*********
*******
*****
***
*

*/
int main(){
	for( int row = 0; row < 5; row++ ){
		int stars = 1 + 2 * row;
		for(int col = 0; col < stars; col++){
			printf("*");
		}
		printf("\n");
	}
	for( int row = 3; row >= 0; row--){
		int stars = 1 + 2 * row; 
		for ( int col = 0; col < stars; col++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

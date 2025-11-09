#include <stdio.h>
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
int main(){
	for( int row = 0; row < 4; row++){
		for( int space = row; space < 3; space++){
			printf(" ");
		}
		int stars = 1 + 2 * row;
		for( int star = 0; star < stars; star++){
			printf("*");
		}
		printf("\n");
	}
	for( int row = 0; row < 3; row++){
		for( int space = 0; space <= row; space++){
			printf(" ");
		}
		int stars = 5 - 2 * row;
		for( int star = 0; star < stars; star++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

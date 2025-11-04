#define ROWS 5
#define COLUMNS 5
#include <stdio.h>
int main(){
	for( int row = 0; row < ROWS; row++){
		for(int column = 0; column < row + 1; column++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

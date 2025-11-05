#define ROWS 5
#include <stdio.h>
int main(){
	for(int row = 0; row < ROWS; row++){
		for(int column = ROWS - row; column <= ROWS; column++){
			printf("%d", column);
		}
		printf("\n");
	}
	return 0;
}

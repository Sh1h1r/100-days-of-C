#define ROWS 5
#include <stdio.h>
/*
    5
   45
  345
 2345
12345
space = 4,3,2,1,0
num = 5 , 4-5, 
*/

int main(){
	for(int row = 0; row < ROWS; row++){
		for(int space = ROWS - row - 1; space >= 0; space-- ){
			printf(" ");
		}
		for(int num = ROWS - row; num <= ROWS; num++){
			printf("%d", num);
		}
		printf("\n");
	}

	return 0;	
}

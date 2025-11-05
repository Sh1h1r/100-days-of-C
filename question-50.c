#define ROWS 5
#include <stdio.h>
/*
	*****
	 ****
	  ***
	   **
	    *
row= 0,1,2,3,4
space = row
coumn = rows - row
*/
void spaces(int space){
	for(int space_ = 0; space_ < space ; space_++ ){
		printf(" ");
	}
}

int main(){
	for(int row = 0; row < ROWS; row++){
		spaces(row);
		for(int column = row; column < ROWS; column++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
